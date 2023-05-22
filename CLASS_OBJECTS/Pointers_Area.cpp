// NAME : HARSHAL PATIL

#include <iostream>
using namespace std;
class Area
{
    public:
    float l,b,area;

    int getdata()
    {
        cout<<"\n Enter Length  : ";
        cin>>l;
        cout<<"\n Enter Breadth : ";
        cin>>b;
    }
    int cal()
    {
        return l*b;
    }
    int putdata()
    {
        cout<<"\n Area of Rectangle is : "<<area;
    }
};
int main() 
{
    Area a;
    Area *ptr;
    ptr=&a;
    ptr->getdata();
    ptr->area=ptr->cal();
    ptr->putdata();
    return 0;
}
// OUTPUT
/* Enter Length  : 20

 Enter Breadth : 5

 Area of Rectangle is : 100  */