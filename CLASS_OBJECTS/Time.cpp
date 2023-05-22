// NAME : HARSHAL PATIL

#include <iostream>
using namespace std;
class Time 
{
    private:
        int hours;
        int minutes;
        int seconds;

    public:
    Time() 
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    void getTime() 
    {
        cout<<"\n Enter Hours : ";
        cin>>hours;
        cout<<"\n Enter Minutes : ";
        cin>>minutes;
        cout<<"\n Enter Seconds : ";
        cin>>seconds;
    }
    void addTime(const Time& t) 
    {
        seconds += t.seconds;
        minutes += t.minutes + seconds / 60;
        hours += t.hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
        hours %= 24;
    }
    void displayTime()
    {
        cout<<"\n Total time : "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<< endl;
    }
};
int main() 
{
    Time totalTime;
    Time t[10];
    int n,i;
    cout<<"\n Enter Number of Times to Add : ";
    cin>>n;
    for (i=0;i<n;i++)
    {
        cout<<"\n Enter Time "<<i+1;
        t[i].getTime();
        totalTime.addTime(t[i]);
    }
    totalTime.displayTime();
    return 0;
}
// OUTPUT
/* Enter Number of Times to Add : 2

 Enter Time 1
 Enter Hours : 12

 Enter Minutes : 23

 Enter Seconds : 45

 Enter Time 2
 Enter Hours : 21

 Enter Minutes : 43

 Enter Seconds : 54

 Total time : 10 hours, 7 minutes, 39 seconds   */
