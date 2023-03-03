/*create a class duration in c++ that has 4 data members days ,hours ,minutes and seconds.
define a null constructor and 2 parametric constructors ,first constructor takes all the parameters
and assigns to the data members .second constructor takes duration in seconds calculates days hours and minutes from
that and sets the data members .also define 2 functions the first displays the duration in an understandable pattern
.the second function shows the total duration in seconds .
create different objects using the constructors and utilize the functions.*/
#include<iostream>
using namespace std;
class Duration
{       
    public:   	
    	int days,hours,minutes,seconds;
    	// NULL CONSTRUCTOR;
        Duration()
		{
            days=0;
            hours=0;
            minutes=0;
            seconds=0;
        }
        // CONSTRUCTOR 1;
        Duration(int day,int hr,int min,int sec)
		{
            days=day;
            hours=hr;
            minutes=min;
            seconds=sec;
        }
        //CONSTRUCTOR 2;
        Duration(int s)
		{
            days=s/86400;
            s=s%86400;
            hours=s/3600;
            s=s%3600;
            minutes=s/60;
            seconds=s%60;
        }
        // function no 1;
        void display()
		{
            cout<<days<<" days "<<"\t"<<hours<<" hours "<<"\t"<<minutes<<" minutes "<<"\t"<<seconds<<" seconds"<<"\t"<<endl;
        }
        // function no 2;
        int getDurationInSeconds()
		{
            return days*86400+hours*3600+minutes*60+seconds;
        }
};
int main()
{
    Duration d1;
    Duration d2(30,62,17,49);
    Duration d3(3680);
    d1.display();
    cout<<"Total duration in seconds = "<<d1.getDurationInSeconds()<<endl;
    d2.display();
    cout<<"Total duration in seconds = "<<d2.getDurationInSeconds()<<endl;
    d3.display();
    cout<<"Total duration in seconds = "<<d3.getDurationInSeconds()<<endl;
    return 0;
}
