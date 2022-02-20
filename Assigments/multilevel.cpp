#include<iostream>
using namespace std;
class A{
public:
    display(){

    cout<<" Grandfather Display"<<endl;
    }

};
class B: public A{
public:
    display()
    {
    cout<<"Parent display"<<endl;
    }
};
class C: public B{
    public:

    display()
    {
        cout<<"Child display"<<endl;
    }
};


int main(){
C obj;
obj.display();      //class c call
c.B::


}
