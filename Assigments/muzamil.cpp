#include<iostream>
using namespace std;
class student{
static int y;
public:
    void functio1(){
    y++;

    }
    void output(){

    cout<<y;
    }


};
int student ::y=1;



int main(){
student s1;
s1.functio1();
s1.output();
}
