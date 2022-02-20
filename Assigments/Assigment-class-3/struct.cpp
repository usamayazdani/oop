#include<iostream>
#include<fstream>
using namespace std;
struct Marketing
{
    long id;
    long long data;
};
string salesperon(ifstream& fin,Marketing M1)
{

ofstream fout;
       for(int i=0; i<10; i++)
       {
           cin>>M1.id;


       }

}
int main()
{
    string sl;
    ofstream fout;
    ifstream fin;
    Marketing M1;

    fout.open("Salesperson_id.txt");
    fout.open("Salesdata.txt");
    fin.open("Salesperson_id.txt");
    if (!fin) //Step 5
{
cout << "Cannot open the input file."
<< endl;
return 1;
}
    string salesperson(fin, M1);

}
