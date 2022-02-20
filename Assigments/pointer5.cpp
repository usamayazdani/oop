#include<iostream>
using namespace std;
int fun(int*a,int*b);
int sum;

int main(){
int a=5,b=9;
fun(&a,&b);
cout<<sum;

}
int fun(int *a,int *b){
    sum=*a+*b;
return sum;


}

