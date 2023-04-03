// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;

int area(float,float);
int peri(float,float);


int main()
{
	float l,b;
	
	cout<<"\n Enter Length : ";
	cin>>l;
	cout<<"\n Enter Breadth : ";
	cin>>b;
	
	cout<<"\n Area Of Rectangle is : "<<area(l,b);
	cout<<"\n Perimeter of Rectangle is : "<<peri(l,b);	
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



