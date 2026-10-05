#include<iostream>
using namespace std;
class student
{
private:
	int id;
	string name;
public:
	student(){
		id=0;
		name="unknown";
	}
	student(int i,string n)
	{
		id=i;
		name =n;
	}
	void display(){
		cout<<"ID:"<<id <<endl;
		cout<<"Name:"<<name<<endl;
	}
};
int main(){
	student s1;
	student s2(101,"Deepthi");
	cout<<"Student 1:"<<endl;
	s1.display();
	cout<<"\nstudent 2:"<<endl;
	s2.display();
	return 0;
}
