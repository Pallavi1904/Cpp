#include <iostream>
using namespace std;
class Bank{
	int principle;
	int year;
	float interest;
	float returnValue;
	
	public:
	Bank(){} // it need to take empty const. otherwise it shows error, it called default constr.
	Bank(int p, int y, float R);
	Bank(int p, int y, int r);
	void show();
};
Bank :: Bank(int p, int y, float R){
	principle = p;
	year = y;
	interest = R;
	returnValue = principle;
	for(int i=0;i<y;i++){
		returnValue = returnValue*(1+R);
	}
}
Bank :: Bank(int p, int y, int r){
	principle = p;
	year = y;
	interest = float(r)/100;
	returnValue = principle;
	for(int i=0;i<y;i++){
		returnValue = returnValue*(1+interest);
	}
}
void Bank ::show(){
	cout<<"your returnvalue on principle "<<principle<<" with "<<year<<" years is "<<returnValue<<endl;
}
int main(){
  int p,y;
  int r;
  float R;
  Bank b1,b2;
  
  cout<<"Enter your principle , rate and r"<<endl;
  cin>>p>>y>>r;
  b1=Bank(p,y,r);
  b1.show();
  
  cout<<"Enter your principle , rate and R"<<endl;
  cin>>p>>y>>R;
  b1=Bank(p,y,R);
  b1.show();
	
	// r = value in in integers
	// R = value in float
	return 0;
}
