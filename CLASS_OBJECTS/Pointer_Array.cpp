// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
int main()
{
		int a[]={10,20,30,40,50};
		int *ptr;
		ptr=a;
		
		cout<<"\n Display Values using a \n";
		for(int i=0;i<5;i++)
		{
			cout<<"\n a["<<i<<"] = "<<a[i];
		}
		
		cout<<"\n\n Display Address using &a \n";
		for(int i=0;i<5;i++)
		{
			cout<<"\n a["<<i<<"] = "<<&a[i];
		}
		
		cout<<"\n\n Display Values using Pointer \n";
		for(int i=0;i<5;i++)
		{
			cout<<"\n a["<<i<<"] = "<<*ptr;
			ptr++;
		}
		ptr=a;
		cout<<"\n\n Display Address using Pointer \n";
		for(int i=0;i<5;i++)
		{
			cout<<"\n a["<<i<<"] = "<<ptr+i;
		}
		
		return 0;	
}
