#include <iostream>
using namespace std;
class Shop{
       int id;
        float price;
public:
void setData(int a,float b){
         id=a;
		price=b;         }
	void getData(void){
     cout<<"The id of product is "<<id<<endl;
      cout<<"The price of product is "<<price<<endl;
	}     };
int main(){
	int size =3;
	Shop* ptr= new Shop[size];
	for(int i=0;i<size;i++){
		int p;
		float q;
	cout<<"Enter id of product number "<<i+1<<endl;
	cin>>p;
	cout<<"Enter price of product number "<<i+1<<endl;
	cin>>q;
	 ptr->setData(p,q); //declaring class pointer object using its class method
	 ptr->getData();
	}
	ptr++;
	     return 0;
}
