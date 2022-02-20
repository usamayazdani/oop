#include<iostream>
using namespace std;
class person{
private:
char name[20];
long phno;
public:
    void read()
    {
        cout<<"Enter a name and phone number "<<endl;
        cin>>name>>phno;

    }
    void show()
    {
        cout<<"Name "<<name;
        cout<<"phone num"<<phno;
    }

};
class student : public person{
private:
char subject[20];
long roll_number;
public:
    void read()
    {
        person::read();
        cout<<"Enter a subject and roll_number"<<endl;
        cin>>subject>>roll_number;

    }
    void show()
    {   person::show();
        cout<<"subject = "<<subject;
        cout<<"roll_number  = "<<roll_number;
    }

};
class exam: public student{
private:
    int m[4];
    double per;
public:
    void read();
    void cal();
    void show();


};
void exam::read()
{
    student ::read();
    cout<<"Enter maks"<<endl;
    for(int i=0; i<4; i++)
    {

        cin>>m[i];
    }
}
void exam::cal()
{    int total_marks=0;
 for(int i=0; i<4; i++)
         double total_marks+=m[i];
        per=(total_marks)/4;


}
void exam::show()
{
    student::show();
    cout<<"Marks "<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<m[i];

    }
    cout<<endl<<per;
}
int main()
{
    exam e;
    e.read();
    e.cal();
    e.show();
}


