#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string int_to_string(int v)         //for changing int to string
{
    stringstream print;
    print<<v;
    return print.str();

}
class Address       //Address type class
{
public:
    int house_no;       //member Data
    int street;
    string city;
    string country;
    string get_full_address(int house_no,int street,string city, string country)        //getting address
    {
                                                                //here we also use to string function to print it
        return "H.no"+int_to_string(house_no)+", "+"Street number "+to_string(street)+", "+city+" "+country;
    }

};
class Employee
{      public:

        string employee_name;
        Address permanent_address,current_address;      //object of class Address
        void set_current_address(int house_no,int street,string city,string country)
        {
            current_address.house_no=house_no;
            current_address.street=street;
            current_address.city=city;
            current_address.country=country;
            current_address.get_full_address(house_no,street,city,country); //function calling
        }
        void set_permanent_address(int house_no,int street,string city,string country)
        {
            permanent_address.house_no=house_no;
            permanent_address.street=street;
            permanent_address.city=city;
            permanent_address.country=country;
            permanent_address.get_full_address(permanent_address.house_no,permanent_address.street,permanent_address.city,permanent_address.country);
        }
        void print_address();


};
void Employee::print_address()
        {
            cout<<"Permanent Address : "<<permanent_address.get_full_address(permanent_address.house_no,permanent_address.street,permanent_address.city,permanent_address.country)<<endl;
            cout<<"Current Address  : "<<current_address.get_full_address(current_address.house_no,current_address.street,current_address.city,current_address.country);

        }
int main()

{
Address A;
A.get_full_address(1,32,"lahore","pakistan" );
Employee e;
e.set_current_address(2,234,"chakwal","pakistan");
e.set_permanent_address(2,24,"peshawar","Pakistan");
e.print_address();
}

