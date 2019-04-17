#include "panel.h"

Panel::Panel(wxWindow* parent) : wxPanel(parent, -1) 
{
	auto vbox = new wxBoxSizer(wxVERTICAL);
	wxString choices[] {wxT("Text"), wxT("Circle"), wxT("Rectangle")};
	

	auto hbox0 = new wxBoxSizer(wxHORIZONTAL);
	radio_box = new wxRadioBox(this, -1, wxT("Choices"), wxDefaultPosition, wxDefaultSize,
		                            WXSIZEOF(choices), choices, 1, wxRA_SPECIFY_COLS);

	hbox0->Add(radio_box);

	auto hbox1 = new wxBoxSizer(wxHORIZONTAL);
	auto m_usernameLabel = new wxStaticText(this, wxID_ANY, wxT("Name: "),
		wxDefaultPosition, wxSize(70, -1));
	hbox1->Add(m_usernameLabel, 0);

	draw_text = new wxTextCtrl(this, wxID_ANY);
	hbox1->Add(draw_text, 0);

	//create a button
	auto draw_button = new wxButton(this, -1, wxT("Draw"));
	draw_button->Bind(wxEVT_BUTTON, &Panel::OnDraw, this);

	hbox1->Add(draw_button);

	vbox->Add(hbox0, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	SetSizer(vbox);

	this->Bind(wxEVT_LEFT_DOWN, &Panel::OnMouseDown, this);
	this->Bind(wxEVT_LEFT_UP, &Panel::OnMouseUp, this);
}

void Panel::OnDraw(wxCommandEvent & event)
{
	std::unique_ptr<Shape> shape;
	auto cdc = new wxClientDC(this);
	cdc->Clear();
	draw_shape(Point(200, 200));
	/*if (radio_box->GetSelection() == 0)//Draw text
	{
		draw_shape(Point(200, 200));
	}

	else if (radio_box->GetSelection() == 1)//Draw Circle
	{
		draw_shape(Point(250, 250), 0, 0, 50);
	}

	else if (radio_box->GetSelection() == 2)//Draw Rectangle
	{
		draw_shape(Point(150, 150), 100, 50)
	}*/
	shape->draw();
}

void Panel::OnMouseDown(wxMouseEvent & event)
{
	auto cdc = new wxClientDC(this);
	wxPoint position = event.GetPosition();

	int x = cdc->DeviceToLogicalX(position.x);
	int y = cdc->DeviceToLogicalX(position.y);

	coord.x = x;
	coord.y = y;
}

void Panel::OnMouseUp(wxMouseEvent & event)
{
	draw_shape(coord);
}

void Panel::draw_shape(Point p, int width, int height, int radius)
{

	auto cdc = new wxClientDC(this);

	std::unique_ptr<Shape> shape;
	

	if (radio_box->GetSelection() == 0)//Draw text
	{
		shape = std::make_unique<Text>(cdc, draw_text->GetValue().ToStdString(),
			p);
	}

	else if (radio_box->GetSelection() == 1)//Draw Circle
	{
		shape = std::make_unique<Circle>(cdc, p, 50);
	}

	else if (radio_box->GetSelection() == 2)//Draw Rectangle
	{
		shape = std::make_unique<acc::Rectangle>(cdc, p, width, height);
	}
	
	shape->draw();

}

