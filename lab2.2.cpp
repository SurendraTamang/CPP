#include<iostream>
using namespace std;
enum{circle,rectangle,triangle};
int main()
{                            
	int s;
	cout<<"Enter the code of shape \n";
	cin>> s;
	if (s >= circle &&  s<= triangle)
	{
		
		switch (s)
			{
				case circle:
					cout<<"The given type is  \t circle ";
					break;
				case rectangle:
					cout<<"The given type is rectangle";
					break;
				case triangle:
					cout<<"The given type is trianle";
					break;
			}
	}
return 0;
}
