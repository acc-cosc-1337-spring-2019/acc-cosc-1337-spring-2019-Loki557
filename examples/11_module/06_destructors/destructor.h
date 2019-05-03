//

class Destructor
{
public:
	Destructor(int n) : num(n) { ptr_num = new int(n); } //Class constructor 
	
														 //If any of the following 3 exist(copy constructor, copy assignment, and Destructor), all need to exist
	Destructor(const Destructor& d);//copy constructor RULE OF 3
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