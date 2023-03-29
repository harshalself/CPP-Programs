#include<iostream>
using namespace std;
int main()
{
    int i,n,a;
    cout<<"\n Enter Number of terms : ";
    cin>>n;
    cout<<"\n Divisible by Number : ";
    cin>>a;
    cout<<"\n Number not Divisible by "<<a<<" are : ";
    for(i=0;i<n;i++)
    {
        if(i%a==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}