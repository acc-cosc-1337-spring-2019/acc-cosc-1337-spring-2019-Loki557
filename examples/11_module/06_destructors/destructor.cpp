#include "destructor.h"

//
//Destructor
Destructor::~Destructor()
{	
		delete ptr_num;
		ptr_num = nullptr;
}

Destructor::Destructor(const Destructor & d)
{
	ptr_num = new int(*d.ptr_num);
}

Destructor& Destructor::operator =(Destructor& d)
{
	delete ptr_num;
	ptr_num = new int(*d.ptr_num);
	return *this;
}
void Destructor::set_value(int n)
{
	num = n;
}

void Destructor::set_ptr_num(int n)
{
	*ptr_num = n;
}

int * Destructor::get_ptr_num()
{
	return ptr_num;
}

int Destructor::get_value()
{
	return num;
}
