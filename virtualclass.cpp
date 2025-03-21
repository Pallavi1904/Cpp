#include <iostream>
using namespace std;
class Student{
	protected:
		int roll_no;
	public:
		void set_rollno(int a){
			roll_no=a;
		}
		void print_rollno(){
			cout<<"Your roll no is "<<roll_no<<endl;		}
};
class Test : public virtual Student{
	protected:
		float maths,physics;
	public:
		void set_marks(float m1,float m2){
			maths=m1;
			physics=m2;
		}
		void print_marks(){
		cout<<"Your marks are: "<<endl;
		cout<<"maths: "<<maths<<endl;
		cout<<"physics: " <<physics<<endl;
		}
};
class Sports : public virtual Student{
	protected:
		int score;
		public:
		void set_score(int sc){
			score = sc;
		}
	void print_score(){
	cout<<"Your score is "<<score<<endl;
	}
};
class Result:public Test, public Sports{
	private: 
	int total;
	public:
		void display(){
		
	 print_rollno();
	 print_marks();
	 print_score();
	 total = maths+physics+score;
	 cout<<"Total score of roll no. "<<roll_no<<" is "<<total<<endl;
}
};
int main(){
 Result pallavi;
 pallavi.set_rollno(3);
 pallavi.set_marks(98.7,99.0);
 pallavi.set_score(93);
 pallavi.display();
	
return 0;	
}
