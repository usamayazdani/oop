#include<iostream>
using namespace std;
class A{
    public:
A()
{
    cout<<"class A cinstructor"<<endl;
}

};


class B: public A{
public:

B()
{
        cout<<"class B cinstructor"<<endl;

}
};
int main()
{
    B obj;

}
