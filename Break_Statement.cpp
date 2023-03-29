#include<iostream>
using namespace std;
int main()
{
    int i,n,a,sum=0;
    cout<<"\n Enter Number of terms : ";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter Positive Integer : ";
        cin>>a;
        if(a<0)
        {
            cout<<"\n Error ! You Entered Negative Integer";
            break;
        }  
        sum=sum+a;  
    }
    
    cout<<"\n Sum is "<<sum;
    
    return 0;
}