#include <iostream>
using namespace std;
class Base{
protected:
	int a;
private:
	int b;
};
class Derived:protected Base{
	
};
/*                 publically derived  privately derived  protectedly derived 
private members     not inherited       not inherited       not inherited
protected members   protected           private             protected
public members      public              private             protected         */
int main(){
	Base obj;
	cout<<obj.a; // will not print as it is in protected mode
	Derived obj2;
	
	
	
	return 0;
}
