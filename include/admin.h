#include<iostream>
#include"register.h"
using namespace std;
class admin
{
    public:
        admin()
        {
            this->username="";
            this->pin=0
        }
        enter()
        {
            string a;
            int b
            cout<<"Enter UserName"<<endl;
            cin>>a;
            cout<<"Enter Password: "<<endl;
            cin>>b;
            if(a=="Admin" && b==1234)
            {
                cout<<"Access Granted"<<endl;
                registers r;
                cout<<r<<endl;

            }
            else
            {
                cout<<"invalid password and username"<<endl;
            }
        }



    private:
        string username;
        int pin;
};
