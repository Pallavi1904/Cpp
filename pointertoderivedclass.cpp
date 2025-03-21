#include <iostream>
using namespace std;
class Base{
	public:
		int var_base;
		void display(void){
		cout<<"Value of var_base is "<<var_base<<endl;
		}
		};
class Derived :public Base{
	public:
		int var_derived;
		void display(void){
		cout<<"Value of var_base is "<<var_base<<endl;
		cout<<"Value of var_derived is "<<var_derived<<endl;
		}
};
int main (){
 Base *pointer_base_class;
 Base obj_base;
 Derived obj_derived;
 pointer_base_class =& obj_derived;
 // pointing base class pointer to derived class
 pointer_base_class->var_base=10;
 	pointer_base_class->display();
 	
	Derived *pointer_derived_class; 
//pointing derived class pointer to derived class
    pointer_derived_class = & obj_derived;
	pointer_derived_class->var_derived=34;
	pointer_derived_class->display();
	
	
	
	return 0;
}
