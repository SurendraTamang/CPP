#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class cricketer {
	string name;
	int age;
	int Num_Match_played;
public:
	void Get_info()
		{
			cout<<"Enter the name of the player?";
			cin>>name;
			cout<<"\n What is the age of the player?";
			cin>>age;
			cout<<"\n How many matches have played?";
			cin>>Num_Match_played;
		}
	void Show_info()
		{
			cout<<"\n The name of the player is "<<name<<endl;
			cout<<"\nThe age of the player is "<<age;
			cout<<"\n The matches played by the player is "<<Num_Match_played;


		}

};
class bowler :public cricketer
{
	protected:
		int num_wickets;
	public:
		void Get_info()
		{
			cricketer::Get_info();
			cout<<"Enter the numbber of wickets taken ?\n";
			cin>>num_wickets;
		}
		void Show_info()
		{
			cricketer::Show_info();
			cout<<"\n The number of wicketes taken are"<<num_wickets;


		}
};
class batsman :public cricketer
{
protected:
	int num_of_run;

public:
	void Get_info()
	{
		cricketer::Get_info();
		cout<<"\n Enter the number of run ";
		cin>>num_of_run;

	}
	 void Show_info(){
	 	cricketer::Show_info();
	 	int century=num_of_run/100;
	 	num_of_run=num_of_run%100;
	 	cout<<"\n His century is "<<century<<"and"<<num_of_run<<"run";
	 }
	
};
int main(){
	batsman bt;
	bowler bw;
	int ask;
	cout<<"Hello!! type 1 and enter for bowler and 2 for the batsman";
	cin>>ask;
	if (ask==1){
		bw.Get_info();
		cout<<"The details about the bowler is::::::::\n ";
	bw.Show_info();	
	}
	
	return 0;
	
}
