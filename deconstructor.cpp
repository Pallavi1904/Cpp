#include <iostream>
using namespace std;
int count = 0;  // global variable
class Num{
	public:
	Num(){
		count++;
	cout<<"constructor is called for number "<<count<<endl;	
	}
	~Num(){  //creating a deconstructor using (~)
	cout<<"Destructor is called for number "<<count<<endl;
	count--;	
	}
	};
int main(){
	cout<<"We are entering in main function "<<endl;
	cout<<"creating one object"<<endl;
	Num n1;
	{   /* whatever operations are in this block are having scope inside this 
	      only. they get destroyed after block is completed*/
	      
		cout<<"We are intering in this block now"<<endl;
		cout<<"creating two more objects now"<<endl;
		Num n2,n3;
		cout<<"we are exiting this block now"<<endl;
		
	// destructor of n2,n3 are formed here as there is no operation after this
	
	}
	cout<<"we are in main function now"<<endl;
	
	/*Destructor of n1 is formed here as it is made inside main function and 
	  there is no operation after this */
	  
	return 0;
}
