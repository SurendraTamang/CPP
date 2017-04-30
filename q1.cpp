/*Write a program using class book,which will represent 
title,author,price,publisher use constructor for initialization
 of objects and use dynamic memory allocation for string type memberand use destructor in proper way!!*/
//Let's begin :).
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class book
	{
		char *title,*author,*publisher;
		float price;
		public:
		book ()// default constructor
			{
				int length=0;
				title=new char [length+1];
				author=new char [length+1];
				publisher=new char [length+1];
				price=0;

			}
		book(char*t,char*a,char*p, float pr)//parameterized constructor
			{
				int length;
				length=strlen(t);
				title=new char[length];
				strcpy(title,t);
				//	cout<<"The string length of the book is "<<length<<endl;//to see whether it is working or not

				
				length=strlen(a);
				author=new char[length];
				strcpy(author,a);


				
				length=strlen(p);
				publisher=new char[length];
				strcpy(publisher,p);

				price=pr;

			}
		book(book &b1)// This is the copy constructor..
			{
				cout<<"\n This object is copied :)!";
				author=b1.author;
				title=b1.title;
				publisher=b1.publisher;
				price=b1.price;
			}
		void dispay()
			{
				cout<<"\n Here is the information about the book"<<endl;

				cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t Rs"<<price;
			}
		~book()
			{
				cout<<"The information is going to be deleted";
				delete[] author;
				delete[] title;
				delete[] publisher;

			}

	};
int main(){

	book b2("BUDDHA_bOOKS","TamangsURENDRA","BuddaPublishES",500);
	b2.dispay();
book	b3(b2);
	b3.dispay();
	getch();
	return 0;
	
}
