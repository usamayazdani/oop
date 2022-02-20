#include <iostream>
using namespace std;

int main() {
    int table;
    cout<<"Enter a number here"<<endl;cin>>table;
  int i = 1;
  do {
    cout << table<<" * "<<i<<" = "<<i*table<<endl;
    i++;
  }
  while (i < 11);
  return 0;
}

