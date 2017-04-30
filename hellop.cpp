#include<iostream>

using namespace std;

class Cube
{
 int side;
 public:
 	int side;
 	int show(int p);
 	
 	
 	
 Cube(int x)
  {  
   side=x;
  }
};
int
Cube ::  show(int p){
	s=p;
	return(s);
	
}
int main()
{
 Cube c1(10);
 Cube c2(20);
 Cube c3(30);
 cout<<
 c3.show(20);
 cout << c1.side;
 cout << c2.side;
 cout << c3.side;
 return 0;
}


