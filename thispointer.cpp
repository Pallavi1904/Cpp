#include <iostream>
using namespace std;
// this keyword use to invoke member function
class A{
	int a;
	public:
	A & setData(int a){
	this->a=a;       //pointing variable as same name as it declared 
	return* this;   //returning the data using this keyword
	}
	void printData(void){
		cout<<"The value of a is "<<a<<endl;
	} };
	int main(){
	A b;
	b.setData(12).printData(); //declaring two methods at single object at a time
		return 0;
		}
	

