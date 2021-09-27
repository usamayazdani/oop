#include<iostream>
using namespace std;
/*Here we use template class
It is used to define our own data type which we want output
if we want float simply add in main function after creating a class  object the
define our required data types
passing a data types
simple data type syntax
template<class T>
class_name <"The data type you want">functon_name or constructor
Multiple data
template<class T1,class T2>
DEfalut parameters
template<class t1=int,t2=float>
class-name<>function_name
*/
template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<this->data1<<" "<<this->data2;
    }
    void ourfunc();
};

void myClass<T1>::outfunc()
{
    cout<<"This function is shown how we declare a template function outside the class
}
int main()
{
    myClass<int, char> obj(1, 'c');
    obj.display();
}
