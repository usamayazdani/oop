#include<iostream>
using namespace std;
/*so the virtual base class means when we created a base class then we use hybrid inheritance where we created
two derived class then these derived class is inherited from other sub class.
Here lets's suppose a variable "A" is created which is inherited from "B" and "C" ,then we use sub class in which
variable "D" is created when we call a "D " class so the variable "A" is gave ambiguity error.Now we use virtual
inheritance. */
class A
{
    protected:
        int class_A;
    public:
        void display()
        {
            cout<<"First";
        }
};
class B:virtual public A
{
public:
    void class_B()
    {
        cout<<"class B inheritance";
    }
};
class C:virtual public A
{
public:
    void class_C()
    {
        cout<<"class C inbheritance";
    }

};
class D:public C,public B
{
public:
    void class_D()
    {
        cout<<"just display";
    }
};



int main()
{
    D D1;
    D1.display();
    D1.class_D();
    D1.class_C();
    D1.class_B();

}
