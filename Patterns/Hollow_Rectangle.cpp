// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;

    cout<<"\n Enter No of Rows : ";
    cin>>r;
    cout<<"\n Enter No of Columns : ";
    cin>>c;
    cout<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1 || i==r || j==1 || j==c)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }

return 0;
}

// Output

/* Enter No of Rows : 5

 Enter No of Columns : 9

*********
*       *
*       *
*       *
**********/