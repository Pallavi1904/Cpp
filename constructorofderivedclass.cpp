#include <iostream>
using namespace std;
class Base1{ //this is base class 1
	int data1;
	public:
	Base1(int i){
	data1=i;
	cout<<"Base1 class constructor called"<<endl;
	}
	void printdata1(){
		cout<<"Value of data 1 is "<<data1<<endl;
	}   };
class Base2{ //this is base class 2
	int data2;
	public:
		Base2(int i){
			data2=i;
		cout<<"Base2 class constructor called"<<endl;
		}
		void printdata2(){
			cout<<"Value of data2 is "<<data2<<endl;
		}
};
class Derived : public Base1, public Base2{ 
//try & exchange place of base1 & base2 for priority cheak....
	int derived1, derived2;
	public:
	Derived(int a, int b, int c, int d):Base1(a),Base2(b){
	//here constructor of derived class and syntax are defined	
		derived1=c;
		derived2=d;
		cout<<"Derived class constructor called"<<endl;
	}
	void printdata3(){
		cout<<"Value of derived1 is "<<derived1<<endl;
		cout<<"Value of derived2 is "<<derived2<<endl;
	}
};
int main(){
	
  Derived pallavi(1,2,3,4);
  pallavi.printdata1();
  pallavi.printdata2();
  pallavi.printdata3();
  	
	
	
	
	return 0;
}
