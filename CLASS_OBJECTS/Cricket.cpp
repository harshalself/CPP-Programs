// NAME : HARSHAL PATIL

#include<iostream>
using namespace std;
class Cricket 
{
    private :
        string name;
        string team_name;
        int batting_avg;

    public :
        int getdata()
        {
            cout<<"\n Enter Player Name : ";
            cin>>name;   
            cout<<"\n Enter Player Team Name  : ";
            cin>>team_name;
            cout<<"\n Enter Batting Average : ";
            cin>>batting_avg; 
            return 0;
        }
        int putdata()
        {
            cout<<"\n"<<name<<"\t"<<"\t"<<team_name<<"\t"<<"\t"<<batting_avg<<"\t\n";   
            return 0;
        }
};
int main()
{
    Cricket player[5];
    int i;
    for(i=0;i<5;i++)
    {
        player[i].getdata();
    }
    cout<<"NAME"<<"\t\t"<<"TEAM NAME"<<"\t"<<"BATTING AVG"<<"\t\n";
    cout<<"----------------------------------------------"; 
    for(i=0;i<5;i++)
    {
        player[i].putdata();
    }
return 0;
}
// OUTPUT
/* Enter Player Name : dhoni

 Enter Player Team Name  : india

 Enter Batting Average : 1

 Enter Player Name : virat

 Enter Player Team Name  : india

 Enter Batting Average : 1

 Enter Player Name : sachin

 Enter Player Team Name  : india

 Enter Batting Average : 1

 Enter Player Name : rohit

 Enter Player Team Name  : india

 Enter Batting Average : 1

 Enter Player Name : hardik

 Enter Player Team Name  : india

 Enter Batting Average : 1
NAME            TEAM NAME       BATTING AVG
----------------------------------------------
dhoni           india           1

virat           india           1

sachin          india           1

rohit           india           1

hardik          india           1*/