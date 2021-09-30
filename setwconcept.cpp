#include<iostream>
#include <iomanip>
#include<fstream>

using namespace std;
int main()
{
    cout<<right<<8;
    cout<<setw(15)<<7;


}

void print(fstream& outF)
{
    outF.open("check.txt");
outF << left; //Step 1
outF << setw(8) << "Output" << " "; //Step 2
outF << setw(15) << "check"; //Step 3
outF << right; //Step 4
outF << setw(3) << 7 << " "; //Step 5
} //end print

