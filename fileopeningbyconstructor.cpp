#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string st="Pallavi akolkar";
	string st2;
	//opening file using constuctor and writing in it
	ofstream out("Untitled2.cpp");//write operation
	out<<st;
	//opening file in it and reading it
	ofstream out("Untitled3.cpp");//write operation
	in>>st2;
	getline(in,st2);//getting full line in output to read
	//cout<<st2; //but we get only one word from this
	return 0;
}


