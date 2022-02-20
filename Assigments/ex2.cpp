#include<iostream>
using namespace std;
class cons{
private:
    int x,y;
public:
    cons(int x,int y){
    cout<<x+y;

    }

};

int main(){

int x,y;

cin>>x;
cin>>y;
cons c(x,y);
}
