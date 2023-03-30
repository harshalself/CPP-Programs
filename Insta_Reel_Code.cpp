// NAME : HARSHAL PATIL

#include<iostream>
#include<string.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int main()
{
    char a[]=" HELLO MY NAME IS HARSHAL \n This is My Official Account \n Here I will be Posting Content Related to \n Coding, Photography and More such Things \n Do Follow and \n Don't forget to Like \n THANK YOU ";
    int i,n;

    n=strlen(a);
    
    for(i=0;i<n;i++)
    {
        Sleep(100);
        cout<<""<<a[i];
    }

    return 0;
}

/* HELLO MY NAME IS HARSHAL 
 This is My Official Account 
 Here I will be Posting Content Related to 
 Coding, Photography and More such Things 
 Do Follow and 
 Don't forget to Like 
 THANK YOU*/
