// NAME : HARSHAL PATIL

#include <iostream>
using namespace std;
int main() 
{
    int num;
    int *ptr;

    cout << "\nEnter Number : ";
    cin >> num;

    ptr = &num;
    if (*ptr%2==0)
    {
        cout << "\nNumber is Even";
    }
    else
    {
        cout << "\nNumber is Odd";
    }
    return 0;
}
// OUTPUT
/*Enter Number : 34

Number is Even  */