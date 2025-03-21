#include <iostream>
using namespace std;
class Base{
	int data1; //private member 
	public:
	int data2;
	void setData();
	int getData1();
	int getData2();
};
void Base :: setData(void){
	data1=10;
	data2=20;
}
int Base:: getData1(){ // method to access private member of belong class
	return data1;
}
int Base:: getData2(){
	return data2;
}
class Derived:public Base{
	int data3;
	public:
	void process();
	int display();	
};
void Derived::process(void){
	data3=data2*getData1(); 
/* we taking getData1() as we accessing data1 by this method. we cannot access
  it directly as it is private member of base class */ 
}
int Derived::display(){
cout<<"The value of data 1 is "<<getData1()<<endl;
cout<<"The value of data 2 is "<<data2<<endl;
cout<<"The value of data 3 is "<<data3<<endl;

}
int main(){
	Derived obj;
	obj.setData(); //can access base meth using derived objects
	obj.process();
	obj.display();
	
	return 0;
}
