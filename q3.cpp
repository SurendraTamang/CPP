#include<iostream>
#include<conio.h>
using namespace std;
class time {
	int hours,minutes,second;
public:
	GetData()
	{
		cout<<"Enter the time in hours,minutes and seconds respectively \n";
		cin>>hours;
	
		cin>>minutes;
		
		cin>>second;

	}
	display ()
	{
		cout<<"The required time is \n";
		cout<<hours<<"\n \t ==> hours"<<"\n  \t ==> minutes"<<minutes<<"\n\t ==> second."<<second;
	}
	 add(time a, time b)
	{
		cout<<"After the addition of the time \n ";
		
		second=a.second+b.second;
		minutes=a.minutes+b.minutes+second/60;
		second=second%60;
		hours=a.hours+b.hours+minutes/60;
		minutes=minutes%60;
	

	}
	 sub(time a, time b)
	{
		cout<<"After the subtraction of the time \n";
	
	second=a.second-b.second;
		if(second<0)
		{
			second+60;
			minutes--;
		}
	minutes=a.minutes-b.minutes;
		if (minutes<0)
		{
			minutes+60;
			hours--;
		}
	hours=a.hours-b.hours;

	}

};
int main(){
	time t1,t2,t3,t4;
	t1.GetData();
	t2.GetData();
	t3.add(t1,t2);
		t3.display();
	t4.sub(t1,t2);

	t4.display();
	getch();
	return 0;
	
}
