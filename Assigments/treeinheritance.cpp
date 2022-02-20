#include<iostream>
using namespace std;
class Animal{

public:
    void info()
    {
        cout<<"its Animal class";
    }


};
class Dog: public Animal
{
public:
    void bark()
    {
        cout<<"\n whoof whooof"<<endl;
    }

};
class cat: public Animal
{
public:
    void meow()
    {
        cout<<"\n meow";
    }
};


int main()
{
    cat c1;
    c1.info();
    c1.meow();
    Dog d1;
    d1.bark();
}
