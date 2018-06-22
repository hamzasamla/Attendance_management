
#include<iostream>
#include <string>

using namespace std;

class student
{
public:
    student()
    {
        this->name="";
        this->id=0;
        this->gender="";
    }
    student(string n,int i,string g)
    {
        this->name=n;
        this->id=i;
        this->gender=g;
    }
    student(student &s)
    {
        this->name=s.name;
        this->id=s.id;
        this->gender=s.gender;
    }

    string getname()
    {
        return this->name;
    }
    int getid()
    {
        return this->id;
    }
    string getgender()
    {
        return this->gender;
    }
    void setname(string n)
    {
        this->name=n;
    }
    void setid(int i)
    {
        this->id=i;
    }
    void setgender(string g)
    {
        this->gender=g;
    }

   /* void addstudent(string newstudent,int i)
    {
        this->studentlist[i]= newstudent;
    }
*/
    void operator =(student& s1)
    {
        this->name=s1.name;
        this->id=s1.id;
        this->gender=s1.gender;
    }

    friend ostream& operator<<(ostream & o,student &s)
    {
       o<<s.name<<","<<s.id<<","<<s.gender<<endl;
    return o;

    }
    friend istream& operator >>(istream& i,student& s)
    {
        i>>s.name>>s.id>>s.gender;
    }


private:
    string name;
    int id;
    string gender;
   // string studentlist[10];
    //course *courselist;
};




