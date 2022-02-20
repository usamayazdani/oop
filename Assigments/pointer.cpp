#include<iostream>
using namespace std;
class cashregister{
private:
    int cash_on_hand;
public:

    cashregister(){

    cash_on_hand=500;

    };
    cashregister(int cash){
    cash_on_hand=cash;

    };
    int currentbalance(){
    return cash_on_hand;

    };
    int acceptamount(int amount){
    cash_on_hand=cash_on_hand+amount;

    }

};
class dispenser{
int cost,number_of_item;
public:
    dispenser(){
    cost=50;
    number_of_item=50;};
    dispenser(int a,int b){
    cost=a;
    number_of_item=b;};
    int getnumberofitem(){

    return number_of_item;};
    int getcost(){
    return cost;};





};


int main(){
    cashregister s;


}
