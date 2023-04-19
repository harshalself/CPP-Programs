// NAME : HARSHAL PATIL

#include <iostream>
using namespace std;

class Number
{
    private:
    int num;

    public:
    void getdata()
    {
        cout << "\n Enter a positive integer : ";
        cin >> num;
    }
    void factorial()
    {
        int result = 1;
        for (int i = 1; i <= num; i++) 
        {
            result *= i;
        }
        cout << " Factorial of " << num << " is : " << result << endl;
    }
    bool Prime() 
    {
        if (num <= 1) 
        {
            return false;
        }
        for (int i = 2; i <= num / 2; i++) 
        {
            if (num % i == 0) 
            {
                return false;
            }
        }
        return true;
    }
    void reverse()
    {
        int reversed = 0;
        while (num != 0)    
        {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        cout<<"\n Reversed Number is : "<<reversed;
}
};
int main() 
{
    Number n;
    int ch,ch1;
    do
    {
    cout<<"\n 1. Factorial \n 2. Check if Number is Prime \n 3. Reverse Number \n Enter your Choice : ";
    cin>>ch;    
    if(ch==1)
    {
        n.getdata();
        n.factorial();
    }
    else if(ch==2)
    {
    n.getdata();    
    if (n.Prime()) 
    {
        cout <<" It is a prime number." << endl;
    } else {
        cout <<" It is not a prime number." << endl;
    }
    }
    else if(ch==3)
    {
    n.getdata();
    n.reverse();
    }
    else
    {
        cout<<"\n Invalid Choice";
    }
    cout<<"\n Do you want to continue(1. Yes 2. No) : ";
    cin>>ch1;
    } while (ch1==1);
    return 0;
}
// Output
/* 1. Factorial
 2. Check if Number is Prime
 3. Reverse Number
 Enter your Choice : 1

 Enter a positive integer : 5
 Factorial of 5 is : 120

 Do you want to continue(1. Yes 2. No) : 1

 1. Factorial
 2. Check if Number is Prime
 3. Reverse Number
 Enter your Choice : 2

 Enter a positive integer : 55
 It is not a prime number.

 Do you want to continue(1. Yes 2. No) : 1

 1. Factorial
 2. Check if Number is Prime
 3. Reverse Number
 Enter your Choice : 3

 Enter a positive integer : 123

 Reversed Number is : 321
 Do you want to continue(1. Yes 2. No) : 2*/