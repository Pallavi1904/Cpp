// TEMPLATE IS ONE OF MOST IMP CONCEPT ACCORDING TO COMPITATIVE EXAM
#include <iostream>
using namespace std;
template <class T> //TEMPLATE...we can simply define T instead of data type
class Vector{
	public:
		T* arr;    
		int size;
	Vector(int m){
			size=m;
			arr=new T[size];
		}
	T sum(Vector &v){
		T d=0;
		for(int i=0;i<size;i++){
			d+=this->arr[i] * v.arr[i];
		}
		return d;
	}
	};
int main(){
	Vector <float>v1(3); //making data type we want as template is already form
	v1.arr[0]=10.9;
	v1.arr[1]=5.7;
	v1.arr[2]=1.8;
	Vector <float>v2(3);//making data type we want as template is already form
	v2.arr[0]=7.9;
	v2.arr[1]=5.4;
	v2.arr[2]=1.0;
	float a=v1.sum(v2);//multi. of int & float is float	
	cout<<a<<endl;
	return 0;
}
