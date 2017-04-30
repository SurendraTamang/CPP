#include<iostream>
#include<conio.h>
using namespace std;
int add(int a, int b)
{
	int sum=a+b;
	cout<<"The sum is ::"<<sum;
}
 double add( double a ,double b)
	{
		float sum=a+b;
		cout<<"The sum is ::"<<sum;
	}

int main()

	{
 	add(5,6);
 	add(5.2,2.3);
 	getch();
 	return 0;
	}