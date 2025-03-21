#include <iostream>
using namespace std;
class Complex{
	public:
		int real,imagenary;
	void setData(int a, int b){
		real=a;
		imagenary=b;
	}
	void printData(){
	cout<<"The value of real part is "<<real<<endl;
	cout<<"The of imagenary part is "<<imagenary<<endl;	
	}
};
int main(){
 Complex p1;
 p1.setData(10,20);
 p1.printData();
 //********************************
 Complex p2;
 Complex* ptr= &p2; //making pointer of object
 (*ptr).setData(11,12);
 (*ptr).printData();
 //********************************	
Complex* pmr= new Complex; //initialing pointer of object directly
(*pmr).setData(13,14);
(*pmr).printData();
//*********************************
Complex* psr=new Complex;
psr->setData(15,16); //Arrow operator
psr->printData();
	return 0;
}
