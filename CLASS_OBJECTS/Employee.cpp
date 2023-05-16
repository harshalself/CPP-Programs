// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
class Employee 
{
    private :
        string name;
        int id;
        float salary;
    
    public :
        void setdata()
        {
            cout<<"\n Enter Name : ";
            cin>>name;

            cout<<"\n Enter ID : ";
            cin>>id;
            
            cout<<"\n Enter Salary : ";
            cin>>salary; 
        }
        void getdata()
        {
            cout<<"\n Name of Employee : "<<name;
            cout<<"\n ID of Employee : "<<id;
            cout<<"\n Salary of Employee : "<<salary;
        }
};
int main()
{
    Employee obj[50];
    int n;

    cout<<"\n Enter No of Employee : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        obj[i].setdata();
    }
    cout<<"\n------------------------------";
    for(int i=0;i<n;i++)
    {
        obj[i].getdata();
        cout<<"\n";
    }
    cout<<"------------------------------";
return 0;
}
// OUTPUT
/*
 Enter No of Employee : 2

 Enter Name : Harshal

 Enter ID : 1

 Enter Salary : 9999

 Enter Name : Sumeet

 Enter ID : 2

 Enter Salary : 9998

------------------------------
 Name of Employee : Harshal
 ID of Employee : 1
 Salary of Employee : 9999

 Name of Employee : Sumeet
 ID of Employee : 2
 Salary of Employee : 9999
------------------------------   */