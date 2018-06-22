#include<iostream>
#include<string>
#include"student.h"

using namespace std;

class leave
{
public:
    leave()
    {
       this->anyStudent.name="";
       this->anyStudent.id=0;
       this->anyStudent.gender="";
       this->reason="";
       this->noOfDays=0;
    }
    leave(string n,int i,string g,string r,int no)
    {
        this->anyStudent.name=n;
        this->anyStudent.id=i;
        this->anyStudent.gender=g;
        this->reason=r;
        this->noOfDays=no;
    }




private:
student anyStudent;
string reason;
int noOfDays;
};
