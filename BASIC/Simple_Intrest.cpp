// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;

int main()
{
	float p,t,r,si;
	
	cout<<"\n Enter Principle Amount(Rupees) : ";
	cin>>p;
	
	cout<<"\n Enter Rate of Intrest(%) : ";
	cin>>r;
	
	cout<<"\n Enter Time Period(Years) : ";
	cin>>t;
	
	si=(p*r*t)/100;
	
	cout<<"\n Simple Intrest is : Rupees "<<si;
	
	return 0;	
}

// Output
/* Enter Principle Amount(Rupees) : 10000

 Enter Rate of Intrest(%) : 7

 Enter Time Period(Years) : 5

 Simple Intrest is : Rupees 3500*/