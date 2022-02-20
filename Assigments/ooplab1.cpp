#include<iostream>
using namespace std;
class A{
    public:
print(){
cout<<"hello world"<<endl;
}
};
class B: public A{
public:
print()
{
    cout<<"Ok"<<endl;
    //A::print(); //overiding funciton by calling
}

};

int main(){
B c;
A *p=&c;
p->print();     //compile time polymorphism or early binding
//c.print();      //
//c.A::print(); // calling the

}
