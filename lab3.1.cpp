#include<iostream>
using namespace std;
class StudentDetails
		{
			int b=0;
			string name;
			int SubjectMarks[7];
			int TotalMarks;
			int ask;
			public:
				void ReadDetails();
				void DisplayDetails();
	
		};
		void StudentDetails :: ReadDetails()
	
		
		{
			int x=0;
			cout<<"Enter the name of student \n";
			cin>>name;
			cout<<"Enter the marks subjects of OOP,DL,EDC,EEM,EM,ECT,MATH_iii \n";
			for (int i=0;i<7;i++)
			{
				cin>>x;
				SubjectMarks[i]=x;
				
				b=b+SubjectMarks[i];
				
			}
		
			
			
		}
		void StudentDetails :: DisplayDetails()
		{
			cout<<"Your Result \n";
			if(b>=630)
			cout<<"Congrats you passed with A+ Grade";
			else if(b<630 && b>560)
			cout<<"WoW! you passed with A Grade";
			else if(b>=560 && b>455  )
			cout<<"YOU have passed with B Grade";
			else
			cout<<"SORRY! YOU HAVE GOT  c GRADE";
			cout<<"\n"<<name <<"\nYour total marks ::\n"<<b;
			
		}
		int main()
			{
				StudentDetails ClassTen;
				ClassTen.ReadDetails();
				ClassTen.DisplayDetails();
				return 0;
			}
