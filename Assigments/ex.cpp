#include<iostream>
using namespace std;
class rectangle{
private:
    int x,y;
public:
    int rectang(int x,int y);


};
rectangle :: rectang(int x,int y){
return x*y;


}

int main(){
rectangle c;
cout<<c.rectang(3,4);

}

