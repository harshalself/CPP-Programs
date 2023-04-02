// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;

    cout<<"\n Enter No of Rows : ";
    cin>>r;

    cout<<endl;
    for(i=1;i<=r-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        } 
        int space=2*r-2*i;
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(i=r;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        } 
        int space=2*r-2*i;
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

return 0;
}

// Output

/* Enter No of Rows : 8

*              *
**            **
***          ***
****        ****
*****      *****
******    ******
*******  *******
****************
*******  *******
******    ******
*****      *****
****        ****
***          ***
**            **
*              *      */