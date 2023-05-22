// NAME : HARSHAL PATIL

#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	protected :
		string name,ph;
	public :	
		void getdata1()
		{
			cout<<"\n Enter Person Name : ";
			cin>>name;
			cout<<"\n Enter Phone Number : ";
			cin>>ph;
		}
};
class Academic_Performance: public Person
{
	private :
		string degree;
        float per;
	public :	
		void getdata2()
		{
			cout<<"\n Enter Degree Earned : ";
			cin>>degree;
			cout<<"\n Enter Percentage(%) : ";
			cin>>per;
		}
		void putdata()
		{
			cout<<"\n Name         : "<<name;
			cout<<"\n Phone Number : "<<ph;
			cout<<"\n Degree       : "<<degree;	
			cout<<"\n Percentage   : "<<per;	
		}
};
int main()
{
	Academic_Performance obj;
	obj.getdata1();
	obj.getdata2();
	obj.putdata();
	return 0;
}
// OUTPUT
/* Enter Person Name : Harshal

 Enter Phone Number : 1234567890

 Enter Degree Earned : Btech

 Enter Percentage(%) : 99

 Name         : Harshal
 Phone Number : 1234567890
 Degree       : Btech
 Percentage   : 99     */