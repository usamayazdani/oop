#include<iostream>
using namespace std;
class Test{
private:
int Testcode;
string Description;
int Nocandidate,Centerrequired;
float Cal(){
    return Centerrequired=(Nocandidate/100+1);}
public:
    void SCHEDULE();
    void DISPEST();
};
void Test::SCHEDULE(){
    cin>>Testcode>>Description>>Nocandidate;
    Cal();
}
void  Test ::DISPEST(){
    cout<<Description<<Nocandidate<<Centerrequired;

}


int main(){

Test t1;
t1.SCHEDULE();
t1.DISPEST();

}
