#include <iostream>
using namespace std;
class Base1{
protected:
 int base1int;
public:
 void set_base1int(int a){
   base1int=a;
 }	
};
class Base2{
protected:
 int base2int;
public:
 void set_base2int(int b){
 base2int=b;
 }
};
class Derived : public Base1, public Base2{
	public:
void display(){
cout<<"The base1 int is "<<base1int<<endl;
cout<<"The base2 int is "<<base2int<<endl;
cout<<"The addition of base1 and base2 is "<<base1int + base2int<<endl;
	}          };
int main(){
Derived add;
add.set_base1int(18);
add.set_base2int(23);
add.display();
	return 0;
}
