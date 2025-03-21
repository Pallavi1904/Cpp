#include <iostream>
using namespace std;
class employee{  //base class
    int no;     //private data of base class
    int kit;
    public:    //public data of base class
	int id;
	float salary;
		employee(){}
		employee(int myid){
			id=myid;
			salary= 3.2;
		} 
	 };
 /*here visibility mode dicide the accesibility
 two types of visibility modes
 1.public: make public data of base class as public for derived class, but it
   cannot access the private data of base class then
 2.private: it makes private members of base class private members of derived 
     class*/
  /* syntax for derived class as follows
   class derivedClassName : visibilityMode BaseClassName */
      
class programmer:public employee{ //derived class
	public:
	programmer(int myid){  // inherited method from base class
		cout<<myid<<endl;

		}	};
int main(){
	employee pallavi(2),arjun(3);
	cout<<pallavi.salary<<endl;
	programmer ph(111);
//programmer(10,20); shows error as it trying to access private mem of base clas

	return 0;
}
