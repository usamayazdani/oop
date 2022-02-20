#include<iostream>
using namespace std;
class student{
public:
int x=12;
int y=13,sum;




  student(){

  this->x=x;
  this->y=y;

  };                       // Default constructor with no arguments
  student(int x= 0,int y =24){
  this->x=x;
  this->y=y;

  };                // Default constructor with one default argument
  student(int x, int y){

 this-> x=x;
  this->y=y;
  };    // Constructor



    void function1(){
    sum=x+y;
    cout<<sum;


    }


};

int main(){
student s();
student s1(int,int);
student s2(int 12,int 10);


s.function1();
s1.function1();
s2.function1();
}
