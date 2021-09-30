#include<iostream>
using namespace std;
class Abrahim{
private:
   string study;
    bool isstudy=false;
public:
    void setabrahim()
    {cin>>study;}
    void output()
    {
        cout<<study<<endl;
        cout<<isstudy;
    }


};
int main()
{
    Abrahim A;
    Abrahim *b;
    b=&A;
    b->setabrahim();
    b->output();

}
