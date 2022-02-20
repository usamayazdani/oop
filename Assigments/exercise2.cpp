#include<iostream>
using namespace std;
class day_of_week{
private:
string week[7]= {"sun","mon","tue","wed","thu","fri","sat"};
public:
int a,d;
day_of_week();
~day_of_week();
string function1(int a){

cout<<"The day is"<<week[a]<<endl;
cout<<"The last day"<<week[a-1]<<endl;
cout<<"The next day"<<week[a+1]<<endl;
cin>>d;
cout<<"THe current day is"<<week[a]<<"if you add more then"<<week[a+d]<<endl;

}

};
day_of_week::day_of_week(){
week[0];
cout<<week[0];


}
day_of_week::~day_of_week(){

cout<<week[6];

}

int main(){
day_of_week d;
d.function1(2);
}
