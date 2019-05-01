//

class Destructor
{
public:
	Destructor(int n) : num(n) { ptr_num = new int(n); }
	Destructor(const Destructor& d);
	Destructor& operator =(Destructor& d); //copy assignment RULE OF 3
	~Destructor(); //Destructor RULE OF 3
	void set_value(int n);
	void set_ptr_num(int n);
	int* get_ptr_num();
	int get_value();

private:
	int num;
	int* ptr_num;

};