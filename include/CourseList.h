#include<iostream>
#include<string>

#include "courses.h"

using namespace std;

class CourseList
{
    public:
        CourseList()
        {
            int p;
            cout<<"Enter the number of courses: "<<endl;
            cin>>p;

           this->totalCourses=p;
           this->c=new courses[this->totalCourses];
           this->count=0;
           for(int i=0;i<this->totalCourses;i++)
           {
               string a,c;
               int b;
               cout<<"Enter Course name:"<<endl;
               cin>>a;
               cout<<"Enter Course Number: "<<endl;
               cin>>b;
               cout<<"Enter Course Instructor: "<<endl;
               cin>>c;
               this->c[i].setname(a);
               this->c[i].setcourseNumber(b);
               this->c[i].setcourseInstructor(c);

           }
        }
        void addCourse(string n,int i)
        {
            //cout<<"Enter course"<<endl;
            c[i].setname(n);
            this->count++;
        }

        friend ostream &operator <<(ostream &o,CourseList &d)
        {
            for(int i=0;i<d.totalCourses;i++)
            {
                o<<d.c[i]<<endl;
            }
            return o;
        }



private:
courses *c;
int totalCourses;
int count;

};
