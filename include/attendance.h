#include<iostream>
#include<string>
#include "student.h"
using namespace std;

class attendance
{
public:
    attendance()
    {
        this->call=null;
    }
    void mark()
    {
        for(i=0;i<totalclasses;i++)
        {
        cin>>c;

        if(c=='p')
        {
            this->call=present;
            this->count++;
        }
        else
            this->call=absent;
    }
    }
    float percentageCalculate()
    {
        float per;
        per=(this->count/totalclasses)*100;
        return per;
        }
    void find(int d)
    {
        for(i=0;i<10;i++)
        {
            if(d==this->id[i])
            {
                cout<<this->name[i]<<","<<this->id[i]<<endl;
                float perc= percentageCalculate();
                if(perc<65)
                {
                    cout<<perc<<endl;
                    cout<<"Not eligible"<<endl;
                }
                else if(per>65)
                {
                    cout<<perc<<endl;
                    cout<<"eligible"<<endl;
                }
                break;
            }
            else {
                cout<<"not found"<<endl;
            }
        }
    }



private:
enum call{present,absent};
int count;
//string eligibility;


};
