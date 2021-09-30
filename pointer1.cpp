#include<iostream>
using namespace std;
int main(){

int *p;
int y=19;
p=&y;
cout<<"Without new"<<p<<endl;
p =new int ;
*p=y;
cout<<p;


}
