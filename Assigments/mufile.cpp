#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[20];
	cin.getline(ch,20);
	ofstream fout;
	fout.open("usama.txt");
	fout<<ch;
	char p[20]="pakis";
	if(ch==p){
		cout<<"ys";
	}
	else cout<<"no";
}
