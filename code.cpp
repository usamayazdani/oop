#include<iostream>
using namespace std;
class A
{
    private:
    int a1, a2;
    protected:
    int pa1, pa2;

    public:
    void ppp(void)
    {
        cout<<"Value of pa1 of class A: "<<pa1<<endl;
        cout<<"Value of pa2 of class A: "<<pa2<<endl;
    }
}; // end of base class A

//derived class
class B : public A   //protectedly-derived class
{
    public:
    void get(void)
    {
        cout<<"Enter value of pa1: "; cin>>pa1;
        cout<<"Enter value of pa2: "; cin>>pa2;

        cout<<"Value of pa1 of class A: "<<pa1<<endl;
        cout<<"Value of pa2 of class A: "<<pa2<<endl;
    }
};  // end of derived class B

int main()
{
    B obj;
    obj.get();
    obj.ppp();
} // end of main() function
