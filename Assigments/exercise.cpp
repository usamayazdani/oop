#include<iostream>
using namespace std;
class romantype{
    public:
int M=1000,D=500,C=100,L=50,X=10,V=5,I=1;
int a;

    int input(){
    cin>>a;

    }
    int  output(){
    cout<<a;

    }


};
int main(){
romantype r;
r.input();
r.output();


}
