#include<iostream>
using namespace std;
class Wheels
{
    private:        //data members of class wheel
    string single_variable;
    public:
        void set_wheel_state(string s)      //input from user and assigning
        {
            single_variable=s;

        }
        string get_wheel_state()        //returning state
        {
            return single_variable;
        }
};


class Car
{
private:
    Wheels w1[4];       //class type array

    string w;
public:
    void set_car_to_moving()        //set state to tuning
    {
        cout<<"Car State :"<<endl;


        for(int i=0; i<4; i++)
        {
            w1[i].set_wheel_state("Turning");

        }
    }
    void set_car_to_stopped()
    {
        cout<<"Car State :"<<endl;


        for(int i=0; i<4; i++)
        {
            w1[i].set_wheel_state("Stopped");

        }
    }
    void   print_car_wheel_state()
    {
        for(int i=0; i<4; i++)
        {
                    //calling function in wheel class and cout the current state
                cout<<"Wheel "<<i<<" is "<<w1[i].get_wheel_state()<<endl;

        }
    }

};


int main()
{
    Wheels W1;
    W1.set_wheel_state("Turning");
    cout<<W1.get_wheel_state()<<endl;
    Car c1;
    c1.set_car_to_moving();
    c1.print_car_wheel_state();
    c1.set_car_to_stopped();
    c1.print_car_wheel_state();
}
