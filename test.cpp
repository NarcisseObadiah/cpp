#include <iostream>

class Base {
	public:
		virtual void show() {
			std::cout << "Base class \n";
		}
};

class Derived : public Base{
	public:
		void show() {
			std::cout << "Derived class\n";
		}
};


int main(){
	Base* ptr;
	Base  b_obj;
	Derived d_obj;

	ptr = &b_obj;
	ptr->show(); 

	ptr = &d_obj;
	ptr->show();

	return 0;
}