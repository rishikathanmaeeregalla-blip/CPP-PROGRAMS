#include<iostream>
using namesopace std;
class Student
{
	private:
		int marks;
	protected:
		int rollno;
	void getdate()
	{
		marks=90;
		rollno=048;
		
	}
	void display(){
		cout<<"marks of the student:"<<marks<<endl;
		cout<<"roll no thestudent:"<<rollno<<endl;
	}
	
};
int main()
{
	student s1;
	s1.getdata();
	s1.display();
	return 0;
}
