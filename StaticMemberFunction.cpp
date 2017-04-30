#include<iostream>
using namespace std;
class test
	{
		int m;
		 static int count;
	public:
	void setcode(void)
		{
				m=++count;
			 }	 
	void showcode(void)
	{
		cout<<"Object NO: "<<m<<endl;
	}
	static void showcount(void)
	{
		cout<<" count number:"<<count<<endl;
	
	}
};
int test :: count;
int main()
	{
		test t1,t2;
		t1.setcode();
		t2.setcode();
		test::showcount();
		test t3;
		t3.setcode();
		test::showcount();
		t1.showcount();
		t1.showcode();
		t2.showcode();
		t3.showcode();
		return 0;
		
	}

