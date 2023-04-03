// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;

int area(float,float);
int peri(float,float);

int main()
{
	float l,b;
	int ch,ch1;
	
	do
	{
	cout<<"\n Enter Length : ";
	cin>>l;
	cout<<"\n Enter Breadth : ";
	cin>>b;
	
	cout<<"\n Choose Operation : \n 1. Perimeter of Rectangle \n 2. Area of Rectangle \n 3. Exit";
	cout<<"\n Enter Choice : ";
	cin>>ch;
	
	switch(ch)
	{
		case 1: 
			cout<<"\n Perimeter of Rectangle is : "<<peri(l,b);
			break;
			
		case 2: 
			cout<<"\n Area Of Rectangle is : "<<area(l,b);
			break;
		case 3:
			cout<<"\n Exiting.....";
			return 1;
		default:
			cout<<"\n Invalid Choice !! ";
			break; 			
	}
	
	cout<<"\n Do you want  to Continue (1. Y, 2. N) : ";
	cin>>ch1;
	}
	while(ch1==1);
	
		
	return 0;	
}

int area(float a,float b)
{
	float area;
	area=a*b;
	return area;
}
int peri(float a,float b)
{
	float peri;
	peri=2*(a+b);
	return peri;
}

// Output



