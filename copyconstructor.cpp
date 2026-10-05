#include<iostream>
using namespace std;
class student{
	int marks;
	public:
	student(){
	 marks= 0;
	 }
	student(int m)
	{
		marks=m;
	}
	student(student&s)
	{
	marks=s.marks;
}
  void display(){
  	cout<<"marks is :"<<marks<<endl;
  }
};
int main(){
	student s1;
	student s2(10);
	student s3(s2);	
	s1.display();
	s2.display();
	s3.display();
	return 0;
	
}
