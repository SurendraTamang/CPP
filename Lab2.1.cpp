#include<iostream>
using namespace std;
void area (int l)
	{
		cout<<"The area of square is ::"<<l*l<<endl;
	}
void area(int c,int b)
	{
		cout<<"The area of rectangle is ::"<<c*b<<endl;
	}
void area(float r)
	{
		cout<<"The area of circle is ::"<<3.14*r*r<<endl;
	}
int main()
	{
		int l=5,c=6,b=5;
		float r=5.6;
		area(l);
		area(c,b);
		area(r);
		return 0;
	}
