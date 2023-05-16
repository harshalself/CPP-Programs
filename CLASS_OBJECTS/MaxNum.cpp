// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
class A
{
	public :	
        int n1;
		void test1()
		{
			cout<<"\n Enter Num 1  : ";
			cin>>n1;
		} 
};
class B
{
    private :
        int n2;
    public :	
		void test2()
		{
			cout<<"\n Enter Num 2 : ";
			cin>>n2;
		}
     friend int max(A ob1,B ob2);
};
int max(A ob1,B ob2)
{
    if (ob1.n1>ob2.n2)
    {
        cout<<"\n "<<ob1.n1<<" is Maximum";
    }
    else
    {
        cout<<"\n "<<ob2.n2<<" is Maximum";
    }
    return 0;
} 

int main()
{
	A obj1;
    B obj2;
    obj1.test1();
    obj2.test2();
    max(obj1,obj2);
	return 0;
}
// OUTPUT 
/* Enter Num 1  : 3

 Enter Num 2 : 5

 5 is Maximum  */