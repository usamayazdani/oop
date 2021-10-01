#include <iostream>
using namespace std;

/*int main()
{
	char val='A';
	char *ptr;
	ptr=&val;
	cout<<"Address of var: "<<static_cast<void *>(&val)<<endl;
	cout<<"Value of var: "<<val<<endl;
	cout<<"Address of pointer: "<<&ptr<<endl;
	cout<<"Value of var: "<<*ptr<<endl;

}
*/
void swapNums(char *&d) {
  *d=*d+1;
  cout<<*d;
}

int main() {
  char c='A';
  char *d;
  d=&c;
  int j=12;
  j++;
  cout<<"MR J"<<j;
  swapNums(d);
  cout<<endl<<"Chng ->"<<*d;
  cout<<endl<<"Chng ->"<<c;
  return 0;
  int s=12;

/*  int **ptr=s;
  int ***p=&ptr;
  cout<<"S"<<s<<endl;
  cout<<"ptr1"<<ptr<<endl;
  cout<<"p"<<p<<endl;

  cout<<"S   "<<s<<endl;
*/
}



