#include<iostream>
#include<string>

using namespace std;

class courses
{
public:
    courses()
    {
        this->name="";
        this->courseNumber=0;
        this->courseInstructor="";
    }
    courses(string n,int cN,string cI)
    {
        this->name=n;
        this->courseNumber=cN;
        this->courseInstructor=cI;
    }
    courses(courses &c)
    {
        this->name=c.name;
        this->courseNumber=c.courseNumber;
        this->courseInstructor=c.courseInstructor;
    }

    string getname()
    {
        return this->name;
    }
    int getcourseNumber()
    {
        return this->courseNumber;
    }
    string getcourseInstructor()
    {
        return this->courseInstructor;
    }

    void setname(string n)
    {
        this->name=n;
    }
    void setcourseNumber(int cN)
    {
        this->courseNumber=cN;
    }
    void setcourseInstructor(string cI)
    {
        this->courseInstructor=cI;
    }

    void addCourse(string newCourse,int i)
    {
        this->courselist[i]=newCourse;
    }

    friend ostream & operator<<(ostream &o,courses c)
    {
        return o<<c.name<<","<<c.courseNumber<<","<<c.courseInstructor<<endl;
    }

private:
    string name;
    int courseNumber;
    string courseInstructor;
    string courselist[10];
};
