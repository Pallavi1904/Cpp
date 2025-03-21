#include <iostream>
#include <cstring>
using namespace std;
class CWH{
	protected:
		string title;
		float rating;
	public:
CWH(string s, float r){
      	title = s;
      	rating = r;
}
 virtual void display(){}	    	
};
class VideoCWH:public CWH{
	private:
		int videolength;
    public:
	VideoCWH(string s, float r, int vl):CWH(s ,r){
		videolength=vl;
	}
	void display(){
	cout<<"The title of video is "<<title<<endl;
	cout<<"The rating of video is "<<rating<<endl;
	cout<<"The video length is "<<videolength<<endl;
	}
};
class TextCWH:public CWH{
	private:
		int words;
    public:
	TextCWH(string s, float r, int v2):CWH(s ,r){
     	words=v2;	}
	void display(){
	cout<<"The title of video is "<<title<<endl;
	cout<<"The rating of video is "<<rating<<endl;
	cout<<"The words in video are  "<<words<<endl;
	}
};
int main(){
string title;
float rating;
int videolength,words;
// for videolength
title="pallavi website";
rating=3.45;
videolength=344;
VideoCWH obj (title,rating,videolength);
obj.display();
//for words
title="arjun website";
rating=5.10;
words=44;
TextCWH obj2 (title,rating,words);
obj2.display();
 //we can aslo point display using pointers of base class
 CWH* ptr[2];
 ptr[0]= &VideoCWH;
 ptr[1]= &TextCWH;
 
 ptr[0]->display();
 ptr[1]->display();	
	return 0;
}
