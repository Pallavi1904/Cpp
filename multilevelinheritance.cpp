#include <iostream>
using namespace std;
class Student{
protected:
     int roll_number;
public:
	 void set_roll_number(int);
	 int get_roll_number(void);
	 };
void Student :: set_roll_number(int r){
	roll_number=r;
}
int Student :: get_roll_number(){
	cout<<"The roll number is "<<roll_number<<endl;
}
class Marks : public Student{
protected:
	float maths;
	float physics;
public:
	void set_marks(float,float);
	 int get_marks();
};
void Marks ::set_marks(float m1,float m2){
	maths=m1;
	physics = m2;
}
int Marks ::get_marks(){
	cout<<"The marks of maths are "<<maths<<endl;
	cout<<"The marks of physics are "<<physics<<endl;
}
class Result : public Marks{  // MULTILEVEL INHERITANCE
	public:
	void display(){
	get_roll_number();
	get_marks();
	cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
}
};
int main(){
	Result pallavi;
	pallavi.set_roll_number(120);
	pallavi.set_marks(99.0,96.4);
	pallavi.display();
	
	return 0;
}
