#include<iostream>
using namespace std;
void func(int,int);
int main(){
int a=5,b=9;
fun(&a,&b);


}
int fun(int &a,int &b){
return &a+&b;


}
