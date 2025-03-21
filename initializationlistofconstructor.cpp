#include <iostream>
using namespace std;
/* syntax for initialization for constructor list
 constructor(argument list):initialization section{
  body of constructor
 };

*/

class Test{
	int a,b;
	public:
	//Test(int i,int j):a(i),b(j)
	//Test(int i,int j):a(i),b(i+j)  i is initialized before j thus
	//Test (int i, int j):a(i),b(2*j) 
	//Test (int i, int j):a(i),b(a+j)  a already define thus can use
	/*Test (int i, int j):b(2*j),a(i) dont give erroe only gives garbage
		 value as b is executed after a in private variables*/
		 	Test (int i, int j):a(i) 
	{ b=j;
		
	    cout<<"initialized in constructor"<<endl;
		cout<<"The value of a is "<<a<<endl;
		cout<<"The value of b is "<<b<<endl;
	}       };
int main(){
	Test t(2,3);
	
	
	
	
	
	return 0;
}
