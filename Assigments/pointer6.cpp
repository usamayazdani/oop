#include<iostream>
using namespace std;
int main()
{
    int a=9,b=7;
    int *p=&a,*p2=&b;
    if(*p>*p2){
        cout<<"a is greater then b"<<endl;

    }else if (*p<*p2){
    cout<<"B is greater then a"<<endl;
    }

}
