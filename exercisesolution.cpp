#include <iostream>
#include <cmath>  // to add all mathematical oerations
using namespace std;
class Simplecalculator{
	int a,b;
public:
 void displaysimple(){
 	cout<<"Enter value of a"<<endl;
 	cin>>a;
 	cout<<"Enter value of b"<<endl;
 	cin>>b;   }
	 void simpleoperation(){
	cout<<"Addition of a and b is "<<a+b<<endl;
	cout<<"Subtraction of a and b is "<<a-b<<endl;
	cout<<"Multiplication of a and b is "<<a*b<<endl;
	cout<<"Division of a and b is "<<a/b<<endl;
	 }    };
class Scientificcalculator{
	int a,b;
public:
 void displayscientific(){
 	cout<<"Enter value of a"<<endl;
 	cin>>a;
 	cout<<"Enter value of b"<<endl;
 	cin>>b;   }
	 void scientificoperation(){
	cout<<"Value  of cos(a)  is "<<cos(a)<<endl;
	cout<<"Value of cos(a) is "<<cos(a)<<endl;
	cout<<"Value of tan(a)"<<tan(a)<<endl;
	cout<<"Value of exp(a)is "<<exp(a)<<endl;
	 }
	};
class Hybridcalculator:public Simplecalculator,public Scientificcalculator{
	// hybrid class
};
int main(){
	Hybridcalculator obj;
	obj.displayscientific();
	obj.scientificoperation();
		return 0;
}
