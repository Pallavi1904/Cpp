//CLASS TEMPLATE WITH MULTIPLE PARAMETERS
#include <iostream>
using namespace std;
template <class T1, class T2> //multiparamiterized template
class Name{
	public:
		T1 data1;
		T2 data2;
	Name(T1 a,T2 b){
			data1=a;
			data2=b;
		}
	void display(void){
	 cout<<data1<<endl<<data2<<endl;	
	}	};
int main(){
	Name<float,int> obj(10.2,5);
	obj.display();
	
	Name<char,float> obj2('@',1.2);
	obj2.display();	
		return 0;
}
