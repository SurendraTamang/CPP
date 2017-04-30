#include<iostream>
using namespace std;
void area(int l)
	{
		cout<<"The area of square is ::"<<l*l;
	}
void area(int c,int b)
	{
		cout<<"The area of rectangle is :: "<<c*b;
	}
void area(float r)
	{
		cout<<"The area of circle is  ::"<<3*r*r;
	}
int main()
{
	float r=5.2;
	area(float r);
	cout>>"Hello world!";
	return 0;
}
