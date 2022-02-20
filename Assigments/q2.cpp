#include<iostream>
using namespace std;
class batsman{
private:
int bcode;
char bname[20];
int inning,runs,notout,batvag;
double calcavg(){
batvag=runs/(inning-notout);
return batvag;}
public:
    reddata(){
    cin>>inning>>runs>>notout;
    calcavg();}
    displaydata(){
    cout<<batvag;

    }


};
int main(){

batsman b1;
b1.reddata();
b1.displaydata();
}
