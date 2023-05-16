// NAME : HARSHAL PATIL

#include <iostream>
using namespace std;
int main() 
{
    int num1,num2;
    int *ptr1,*ptr2,sum;

    cout << "\nEnter First Number : ";
    cin >> num1;

    cout << "\nEnter Second Number : ";
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    
    cout << "\nSum of the Two Numbers is : " << sum;

    return 0;
}
// OUTPUT
/*Enter First Number : 45

Enter Second Number : 34

Sum of the Two Numbers is : 79  */