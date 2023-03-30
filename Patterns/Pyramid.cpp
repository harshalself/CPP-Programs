// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;

    cout<<"\n Enter No of Rows : ";
    cin>>r;

    cout<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(j<=r-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<" *";
            }
        }
        cout<<"\n";
    }

return 0;
}

// Output

/* Enter No of Rows : 6

      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *     */