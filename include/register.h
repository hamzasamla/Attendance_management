#include<iostream>
#include<string>
#include "student.h"
using namespace std;


//STUDENTLIST and Register are same.

class registers
{
    public:

        registers()
        {
            this->s[0]=new student("Shaheer",1,"male");
           //student s[1]=new ("Hamza",1,"male");
            /*int b;
            string a,c;
            cout<<"Total students in class: "<<endl;
            cin>>this->total_Std;
            for(int i=0;i<this->total_Std;i++)
            {
                cout<<"Enter name, id, gender: "<<endl;
                cin>>a;
                cin>>b;
                cin>>c;
                s[i].setname(a);
                s[i].setid(b);
                s[i].setgender(c);

            }*/
        }
        registers(registers&r)
        {
            for(int i=0;i<10;i++)
            {
                this->s[i]=r.s[i];
            }
        }
         registers operator= (registers &w)
           {
               for(int i=0;i<10;i++)
            {
                this->s[i]=w.s[i];
            }
        }
        void display()
        {
            for(int i=0;i<10;i++)
            {
                cout<<this->s[i]<<endl;
            }
        }




    private:
        int total_Std;
        int count;
        student s[10];

};


