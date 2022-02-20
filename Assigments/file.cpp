#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
string line;
fin.open("sample.txt");
while(fin){
    getline(fin,line);
    cout<<line;
}
fin.close();
}
