/* Write a program to calculate and display the cube of integer, float and double
 number using function overloading (passing single argument to the function).*/

#include <iostream>
using namespace std;

class course 
	{
		public:
		float percent ;
		void display_result()	
		{
			cout<<"The result of the percent is "<<percent<<endl;
		}
	};
class Mathematics : protected course
	{
	public:
		int Math_Marks;
		void Get_Math_Marks(){
			cout<<"Enter the marks of Math";
			cin>>Math_Marks;
		}
	};
class Engineering :protected course
	{
	public:
		int Drawing_Marks;
		void Get_Drawing_Marks()
		{
			cout<<"Enter the marks of Drawing_Marks"<<endl;
			cin>>Drawing_Marks;
		}
	};
class Science :protected course

{
	public :
	int Physics_marks,Chemistry_Marks;
	void display_Physics()
	{
		cout<<"This is called here first"<<Physics_marks;

	}


};
class physics : public Science
{
	public:
	void Get_Physics_Marks(){
		cout<<"Enter the phsics marks";
		cin>>Physics_marks;
	}
	void display_Physics(){
	//science :: display_Physics();
	cout<<"The marks of physics in second is here"<<Physics_marks;


}
};
class chemistry : public Science
	{
	public :
	void read_chemistrymarks()
	{
		cout<<"Enter the marks in chemistry";
		cin>>Chemistry_Marks;
	}
};
class student : public Engineering
{
public:
	void process()
	{
		chemistry t1;
		t1.read_chemistrymarks();
		Get_Drawing_Marks();
		Mathematics t2;
		t2.Get_Math_Marks();
		physics t3;
		t3.Get_Physics_Marks();
		course t0;
		t0.percent=(t1.Chemistry_Marks+t2.Math_Marks+Drawing_Marks+t3.Physics_marks)/4;
		t0.display_result();

	}
};
int main (){

student suren;
suren.process();
physics example1;
example1.Get_Physics_Marks();
example1.display_Physics();
example1.Science::display_Physics();
return 0;
}


