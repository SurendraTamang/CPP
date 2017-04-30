#include<iostream>
using namespace std;
int swap(int &a,int &b)
	{
		int t;
		t=a;
		a=b;
		b=t;
	}
int &max(int &a,int &b)
	{
		if (a>b)
		return a;
		else 
		return b;
		
	}
int main()
	{
		int a=10,b=20;
		cout<<"a="<<a<<"\t b="<<b<<endl;
		swap(a,b);
		cout<<"After using function \n a="<<a<<"\t b="<<b<<endl;
		
		cout<<"After using return by reference\t "<<max(a,b)<<endl;
		return 0;
		
	}
