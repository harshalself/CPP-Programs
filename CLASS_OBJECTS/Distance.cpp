// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
class Distance
{
		private :
			float meter,cm;
		public :
			void getdata()
			{			
				cout<<"\n Enter Distance in Meter : ";
				cin>>meter;
				cout<<"\n Enter Distance in CentiMeter : ";
				cin>>cm;
			}
		friend int add(Distance D1,Distance D2);
		friend int comp(Distance D1,Distance D2);
};
int add(Distance D1,Distance D2)
{
	float a,b;
	a=D1.meter+D2.meter+(D1.cm/100)+(D2.cm/100);
	b=(D1.meter*100)+D1.cm+(D2.meter*100)+D2.cm;
	cout<<"\n Total Distance in Meter      : "<<a<<" m";
	cout<<"\n Total Distance in CentiMeter : "<<b<<" cm";
	return 0;
}
int comp(Distance D1,Distance D2)
{
	float c,d;
	c=(D1.meter*100)+D1.cm;
	d=(D2.meter*100)+D2.cm;
	if(c>d)
	{
		cout<<"\n Distance 1 is Greater";
	}
	else if(d>c)
	{
		cout<<"\n Distance 2 is Greater";
	}
	else
	{
		cout<<"\n Both are Equal";
	}
	return 0;
}
int main()
{
		Distance D1,D2;
		int ch,ch1;
		do
		{
		cout<<"\n * Choose Operation to Perform *\n 1. Add Distance\n 2. Compare Distance\n 3. Exit ";
		cout<<"\n Enter Choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\n Distance 1 ";
			D1.getdata();
			cout<<"\n Distance 2 ";
			D2.getdata();	
			add(D1,D2);
			break;
		case 2:
			cout<<"\n Distance 1 ";
			D1.getdata();
			cout<<"\n Distance 2 ";
			D2.getdata();	
			comp(D1,D2);	
			break;
		case 3:
			cout<<"\n Exit...";
			return 1;
			break;
		default:
			cout<<"\n Invalid Choice...";
		}	
		cout<<"\n Do you wish to continue(1. Yes, 2. No) : ";
		cin>>ch1;
		}while(ch1==1);		
	  return 0;	
}
// OUTPUT
/** Choose Operation to Perform *
 1. Add Distance
 2. Compare Distance
 3. Exit
 Enter Choice : 1

 Distance 1
 Enter Distance in Meter : 20

 Enter Distance in CentiMeter : 200

 Distance 2
 Enter Distance in Meter : 3

 Enter Distance in CentiMeter : 450

 Total Distance in Meter      : 29.5 m
 Total Distance in CentiMeter : 2950 cm
 Do you wish to continue(1. Yes, 2. No) : 1

 * Choose Operation to Perform *
 1. Add Distance
 2. Compare Distance
 3. Exit
 Enter Choice : 2

 Distance 1
 Enter Distance in Meter : 20 

 Enter Distance in CentiMeter : 200

 Distance 2
 Enter Distance in Meter : 3

 Enter Distance in CentiMeter : 1000

 Distance 1 is Greater
 Do you wish to continue(1. Yes, 2. No) : 1

 * Choose Operation to Perform *
 1. Add Distance
 2. Compare Distance
 3. Exit
 Enter Choice : 3

 Exit...*/
