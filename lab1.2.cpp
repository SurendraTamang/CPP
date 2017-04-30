#include<iostream>
using namespace std;
interest1(int p,int t,float r=2.5)
	{
		float SI;
		SI=(p*t*r)/100;
		cout<<"The simple interest by default is ::" << SI;
		
	}
	
int main()
	{
	cout<<"The updated ::\n";
		
	interest1(5,5,6.2);
	cout<<"\n"<<"The defaut\n";
	interest1(5,5);
	return 0;
	
	}
