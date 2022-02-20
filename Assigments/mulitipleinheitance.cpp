#include<iostream>
using namespace std;
class A{
protected:
    int x;
public:
   void  Readx()
   {
       cout<<"Enter value of X :"<<endl;cin>>x;
   }
   void show()
   {
    cout<<" X ="<<x;
   }
    void fast()
    {
        cout<<"Base 1"<<endl;
    }
};
class B{
protected:
    int y;
public:
   void  Ready()
   {
       cout<<"Enter value of y :"<<endl;cin>>y;
   }
   void show()
   {
    cout<<" y ="<<y;
   }
   void fast()
   {
       cout<<"base 2";
   }



};
class c: public A, public B{
private:
    int z;
public:
    void add(){
    A::Readx();
    B::Ready();
    z=x+y;
    }
    void showz(){

    cout<<" \nz = "<<z;
    }



};

int main(){
c obj;
//obj.A::fast();
obj.B::fast();
obj.add();
obj.showz();
}
