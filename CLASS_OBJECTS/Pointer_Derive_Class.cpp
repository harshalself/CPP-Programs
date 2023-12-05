// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
class Base
{
	protected :
		int b;
	public :
		int getdata1(int y)
		{
			b=y;
			return 0;
		}
		void display()
		{
			cout<<"\n Inside Base Class";
			cout<<"\n Value of b is "<<b;		
		}
};
class Derive: public Base
{
 	private :
 	int d;
 	public : 
 		void getdata2(int x)
 		{
 			d=x;
 		}
 		void display()
 		{
 			cout<<"\n Inside Derive Class";
 		  cout<<"\n Value of d "<<d;
 			cout<<"\n Value of b is "<<b;
 		}	
};
int main()
{
	Base *ptr1;
	Base obj;
	Derive obj1;
	ptr1=&obj;
	
	ptr1->getdata1(50);
	ptr1->display();		
	((Derive*)ptr1)->getdata2(100);
	((Derive*)ptr1)->display();
	
	return 0;	
}
