#include <iostream>
using namespace std;
class Number{
	int a;
	public:
		Number(){  //default constructor
		a= 0;}
		Number(int num){
			a=num;
		}
		Number (Number &obj){             //copy constructor body
			cout<<"copy constructor is invoked "<<endl;
			a= obj.a;
		
		
		/* even if do not use this defination of copy cons it will never give
		eroor as class have its own default copy constructor.*/	
		}
		
		void display(){
	cout<<"Number is "<<a<<endl;		
		}
};
int main(){
	Number n1,n2,n3(10),n4;
	n1.display();
	n2.display();
	n3.display();
	
	Number m3(n3);  //valid declaration of copy constructor,declared & initialized here only.
	m3.display();
	
	Number m4=n3;  // another way to display copy constructor
	m4.display();
	
	// Number n4(n3);  //this is itself a obj of number class which is declared already
	
	
	return 0;
}
