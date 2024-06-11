#include <iostream>

class Class{

public :

	int a;


	Class (Class const &ref)
	{
		std::cout << "copy cons called ~" << std::endl;
		this->a  = ref.a;
	}
	Class(int a) {
		std::cout << "  called ~" << std::endl;
		this->a  = a;
	};
	Class& operator-(Class const rhs)
	{
		this->a = this->a - rhs.a;
		return (*this);
	}
};
