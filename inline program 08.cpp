#include<iostream>
using namespace std;
inline int square(int n)
{
	return n*n;
}
int add(int a,int b)
{
	return a+b;
	
}
int add(int a, int b,int c)
{
	return a+b+c;
}

int main()
{
	cout<<"square of 5="<<square(5)<<endl;
	cout<<"sum of 2 number =" <<add(10,20)<<endl;
	cout<<"sum of 3 number =" <<nadd(10,20,30)<<endl;
	return 0;
}
