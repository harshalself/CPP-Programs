// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;

int main()
{
	int dd,di,q,r;
	
	cout<<"\n Enter Dividend : ";
	cin>>dd;
	cout<<"\n Enter Divisor : ";
	cin>>di;
	
	q=dd/di;
	r=dd%di;
	
	cout<<"\n Quotient is : "<<q;
	
	cout<<"\n Remainder is : "<<r;
	
	return 0;	
}

// Output
/* Enter Dividend : 89

 Enter Divisor : 3

 Quotient is : 29
 Remainder is : 2*/