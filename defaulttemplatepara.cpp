#include <iostream>
using namespace std;
template <class T1=float, class T2=int> //multiparamiterized default template
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
	Name<> obj(10.2,5); //we can make <> as empty for default templates
	obj.display();
	
	Name<float,int>obj2(10.2,5);//can also make it parametrized again
	obj2.display();
	return 0;
}
