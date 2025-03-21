#include <iostream>
using namespace std;
template <class T>
class Harry{
	public:
		T data;
		Harry(T a){
			data=a;
		}
		void display();
};
template <class T> //we can also define template function in such way
void Harry<T>::display(){
	cout<<data<<endl;     }
	
void func(int a){ //NORMAL FUNCTION
	cout<<"I am first function "<<a<<endl;
}	
template <class T> //PARAMITERIZED FUNCTION
void func(T a){ 
	cout<<"I am paramiterized function "<<a<<endl;
}	
int main(){
	Harry<char>h('#');
	h.display();
	func(10); //EXACT MATCH TAKE HIGHER PRIORITY......
	return 0;
}
