#include "iostream"
class RuleOfFive
{
public:
	RuleOfFive(int n) : num(n) { ptr_num = new int(n); } //Class constructor 

														 //If any of the following 3 exist(copy constructor, copy assignment, and RuleOfFive), all need to exist
	RuleOfFive(const RuleOfFive& d);//copy constructor RULE OF 3
	RuleOfFive& operator =(RuleOfFive& d); //copy assignment RULE OF 3
	RuleOfFive(RuleOfFive&& r); //Mover Constructor - RULE OF 5 C++ 11
	//&& is for temporary rvalues
	RuleOfFive& operator=(RuleOfFive&& r);//Coppy assignment - RULE OF 5 C++ 11
	~RuleOfFive(); //RuleOfFive RULE OF 3
	void set_value(int n);
	void set_ptr_num(int n);
	int* get_ptr_num();
	int get_value();

private:
	int num;
	int* ptr_num;

};