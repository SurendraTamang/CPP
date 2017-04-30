#include<iostream>
#include<conio.h>
using namespace std;
class time {
	int hours,minutes,second;
public:
	GetData()
	{
		cout<<"Enter the time in hours,minutes and seconds respectively \n";
		cin>>hours>>minutes>>second;
	}
	display ()
	{
		cout<<"The required time is \n";
		cout<<hours<<"/n"<<"/n"<<minutes<<"/n"<<second;
	}
	time add(time a, time b)
	{
		cout<<"After the addition of the time \n ";
		time temp.;
		temp.second=a.second+b.second;
		temp.minutes=a.minutes+b.minutes+temp.second/60;
		temp.second=temp.second%60;
		temp.hours=a.hours+b.hours+temp.minutes/60;
		temp.minutes=temp.minutes%60;
		return temp;

	}
	time sub(time a, time b)
	{
		cout<<"After the subtraction of the time \n";
		time temp;
	temp.second=a.second-b.second;
		if(temp.second<0)
		{
			temp.second+60;
			temp.minutes--;
		}
	temp.minutes=a.minutes-b.minutes;
		if (temp.minutes<0)
		{
			temp.minutes+60;
			temp.hours--;
		}
	temp.hours=a.hours-b.hours;
	return temp;
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
