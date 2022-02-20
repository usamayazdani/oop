#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
char line;
fin.open("sample.txt");

ofstream fout;
fout.open("newfile.txt");
while (fin.get(line)){
    fout.put(line);
}




}
