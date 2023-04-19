// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;

int main()
{
	int num,i,l;
	
	cout<<"\n Enter Number : ";
	cin>>num;
	cout<<"\n Enter Limit : ";
	cin>>l;
	for(i=1;i<=l;i++)
	{
		cout<<" "<<num<<"  *  "<<i<<" =  "<<num*i<<endl;
	}
	
	return 0;	
}

// Output
/* Enter Number : 5

 Enter Limit : 10
 5  *  1 =  5
 5  *  2 =  10
 5  *  3 =  15
 5  *  4 =  20
 5  *  5 =  25
 5  *  6 =  30
 5  *  7 =  35
 5  *  8 =  40
 5  *  9 =  45
 5  *  10 =  50*/