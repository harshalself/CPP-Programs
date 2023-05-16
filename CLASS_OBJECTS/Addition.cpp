// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
class Add
{
	private:
		int a,b,sum;
	
	public:
		void input()
		{
	   		cout<<"\n Enter the Numbers : ";
	   		cin>>a>>b;
	  	}
		void calculation()
	 	{
	 		sum=a+b;
	 	}
	 	void output()
	 	{
			cout<<"\n The Sum of "<<a<<" and "<<b<<" is "<<sum;
		}
};
int main()
{
	Add add;
	add.input();
	add.calculation();
	add.output();
return 0;
}
// Output
/*Enter the Numbers : 5
7

 The Sum of 5 and 7 is 12*/