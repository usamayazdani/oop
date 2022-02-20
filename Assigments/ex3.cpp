
#include<iostream>
using namespace std;
class student{
string name;
int marks1,marks2;
public:
void getdata(int m,int m2,string name){
this->name=name;
marks1=m;
marks2=m2;}
void display(){

cout<<"THe name of student is"<<name<<"And his marks"<<marks1<<" ,"<<marks2;

}


};
int main(){
int m,m2;
string name;
student s;
cin>>m>>m2>>name;

s.getdata(m,m2,name);
s.display();

}
