#include <iostream>
using namespace std;
int main(){
	int a = 10;
	int* ptr=&a;
	cout<<"The value of a is "<<*(ptr)<<endl;
	//similarly
	 int *p=new int(20);
	cout<<"The value of b is "<<*(p)<<endl;
	 // new keyword with array
	int* arr=new int[3];
	 arr[0]=10;
	 arr[1]=11;
	 arr[2]=12;
	 cout<<"Value of arr[0] is "<<arr[0]<<endl;
	 cout<<"Value of arr[1] is "<<arr[1]<<endl;
	 cout<<"Value of arr[2] is "<<arr[2]<<endl; 
	 // delete keyword
      /*int* arr=new int[3];
	 arr[0]=10;
	 arr[1]=11;
	 arr[2]=12;
	 delete[]arr;  this is delete keyword
	 cout<<"Value of arr[0] is "<<arr[0]<<endl;
	 cout<<"Value of arr[1] is "<<arr[1]<<endl;
	 cout<<"Value of arr[2] is "<<arr[2]<<endl;   */
	return 0;
	
}
