#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#include <sstream>
#include <cstring>


using namespace std;
int first_choice;   //Here we gave our choice in which portion we want to enter
int admin_choice;   //After Admin 1 choice then there is other three types we use this variable for that purpose
class cheff;
class Resturant{
	public:
            int f_choice;
             Resturant()        //constructor
            {
                cout<<setw(50)<<">..............project Name................<"<<endl;
                cout<<setw(45)<<">.............Restaurant Management system................<"<<endl;
                cout<<setw(55)<<">..............Group Members................<"<<endl;
                cout<<setw(65)<<">....Usama yazdani......20p-0598............BCS-2D...........<"<<endl;
                cout<<setw(65)<<">....Muzamil......20p-0108............BCS-2D...........<"<<endl;
                cout<<setw(65)<<">...Subhan Khalid.......20p-0086............BCS-2D...........<"<<endl;

            }
            void Main()     //our first user choice function
            {
            cout<<"*....Enter 1 if you are admin:...*"<<endl;
            cout<<"*...Enter 2 if you want to make online order:...*"<<endl;
            cout<<"*...Enter 3 if you want to gave use feedback:...*"<<endl;
			cin>>f_choice;
                  first_choice=f_choice;
            }
};
class ADMIN         //logic class
{
private:
    string username;
    string password;
public:
    ADMIN()         //constructor to save actual username etc
    {
        ofstream fout;
        fout.open("admindata.txt");         //creating a admin file
        username="usama";
        fout<<username;
        password="1234";
        fout<<password;
        fout.close();
    }
    bool  user()            //checking username and password is correct or not
    {
        string user1,pass1;
    cout<<"Enter a username here"<<endl;
      cin>>user1;
      cout<<"Enter a password here"<<endl;
      cin>>pass1;

    if(user1==username && pass1==password)
            return true;
        else
            cout<<"Wrong username";
            return false;


    }
     void display()         //After pressing next function for catagories in admin
{
    if(user()==true)
    {
        int value;
        cout<<"........Welcome to Kitchen......."<<endl;
        cout<<"........If you want to know about STAFF press 1,For equipments press 2,for location 3"<<endl;
        cin>>value;
        admin_choice=value;     //storing admin choice in global variable
        }}};

//........class for creating staff members we have then changing in staff members
class Staff{
	public:
	    string s1,s2,s3,s4,s5,s6,s7;        //for creating staff info and number of staff
		void Detail_Staff(){
			ofstream indata;
			indata.open("info.txt");        //file handlig
			cout<<"=> ABOUT THE STAFF\n\n";
			indata<<"\n\n=> ABOUT THE STAFF\n\n";
			cout<<"\tThere are multiple staff in the restaurant business:\n\tmanagers,chefs,cooks,serves,buspersons,dishwashers,hosts and bartenders.\n\n\n";
			indata<<"\tThere are multiple staff in the restaurant business:\n\tmanagers,chefs,cooks,serves,buspersons,dishwashers,hosts and bartenders.\n\n\n";
		}
};
class Staff_Business: public Staff{  //  Inheritance
private:
    int M=1,Ch=2,Co=3,Di=15,Ba=1;       //Declaration of staff we have already
	public:
	    //class members
		void Manager(){

			s1="The most important employes in many restaurants is the manager. Only one manager to this restaurant.";
			cout<<"MANAGER : "<<s1<<" : "<<M<<"\n\n";
		}
		void Chefs(){
			s2="At some restaurants, the star attraction is the chef. Two chefs of this restaurant.";

			cout<<"CHEFS : "<<s2<<" : "<<Ch<<"\n\n";
		}
		void Cooks(){
			s3="When you start out,you'll probably need three cooks \"Two full time and one part time\".\nTen cooks are working in this restaurant.";

			cout<<"COOKS : "<<s3<<" : "<<Co<<"\n\n";
		}
		void Dishwashers(){
			s4="As the job title implies, dishwashers keep clean dishes available in your restaurant.\nFiften of people who are working dishwasheers jobs.";
			cout<<"DISHWASHERS : "<<s4<<" : "<<Di<<"\n\n";
		}
		void Serves(){
			s5="Finding the right serving staff is just as important as finding the right manager.\nHere best serves staff are job working.";
			cout<<"SERVES : "<<s5<<"\n\n";
		}
		void Hosts(){
			s6="Depending on the size and style of your restaurant, you may need someone to seat guests,\ntake reservations and sometimes act as cashier.\nIn this restaurant best hosts are hire that high proformence of restaurant.";
			cout<<"HOSTS : "<<s6<<"\n\n";
		}
		void Bartenders(){
			s7="If you have a small bar in your restaurant and it's only open at night,one bartendar,\nwith a couple of backups available,will probably be sufficient.\nDay and Night both time provide a best quilty of things.";
			cout<<"BARTENDERS : "<<s7<<" : "<<Ba<<"\n\n";
		}
		void save_data(){
			ofstream infile;
			infile.open("info.txt");
			infile<<"MANAGER : "<<s1<<" : "<<M<<"\n\n";
			infile<<"CHEFS : "<<s2<<" : "<<Ch<<"\n\n";
			infile<<"COOKS : "<<s3<<" : "<<Co<<"\n\n";
			infile<<"DISHWASHERS : "<<s4<<" : "<<Di<<"\n\n";
			infile<<"BARTENDERS : "<<s7<<" : "<<Ba<<"\n\n";
			infile<<"SERVES : "<<s5<<"Good"<<"\n\n";
			infile<<"HOSTS : "<<s6<<"Nice Job"<<"\n\n";
			infile.close();
		}
		void editing_in_staff()     //if user want to addition or removing in staff
		{
		    ifstream readfile;
		    readfile.open("info.txt");      //reading current file
		    ofstream infile;
		    infile.open("temp.txt");        //creating new file for temporary which add new data  means changing etc
		    int changing;           //means for which catagories of staff you want to change
		    int staff_adding;       //how many members you want to add
		    cout<<"if you want changing in Manager press 1,Chef 2,cook 3,Dishwasher 4, bartender 5... Also number"
"of staff you want to edit"<<endl;

            cin>>changing;
            cout<<"How many employes you want to add or removing for removing enter a minus value :"<<endl;
           cin>>staff_adding;
                string line_chk;

		    switch(changing){
            case 1:
                M=M+staff_adding;
                infile<<"MANAGER : "<<s1<<" : "<<M<<"\n\n";
                infile<<"CHEFS : "<<s2<<" : "<<Ch<<"\n\n";
                infile<<"COOKS : "<<s3<<" : "<<Co<<"\n\n";
                infile<<"DISHWASHERS : "<<s4<<" : "<<Di<<"\n\n";
                infile<<"BARTENDERS : "<<s7<<" : "<<Ba<<"\n\n";
                infile<<"SERVES : "<<s5<<"Good"<<"\n\n";
                infile<<"HOSTS : "<<s6<<"Nice Job"<<"\n\n";
                remove("info.txt");
                rename("temp.txt","info.txt");      //renamve a temporary file
                            break;


                 case 2:

                Ch=Ch+staff_adding;
                infile<<"MANAGER : "<<s1<<" : "<<M<<"\n\n";
                infile<<"CHEFS : "<<s2<<" : "<<Ch<<"\n\n";
                infile<<"COOKS : "<<s3<<" : "<<Co<<"\n\n";
                infile<<"DISHWASHERS : "<<s4<<" : "<<Di<<"\n\n";
                infile<<"BARTENDERS : "<<s7<<" : "<<Ba<<"\n\n";
                infile<<"SERVES : "<<s5<<"Good"<<"\n\n";
                infile<<"HOSTS : "<<s6<<"Nice Job"<<"\n\n";
                remove("info.txt");
                rename("temp.txt","info.txt");
                            break;



                 case 3:

                        Co=Co+staff_adding;
                infile<<"MANAGER : "<<s1<<" : "<<M<<"\n\n";
                infile<<"CHEFS : "<<s2<<" : "<<Ch<<"\n\n";
                infile<<"COOKS : "<<s3<<" : "<<Co<<"\n\n";
                infile<<"DISHWASHERS : "<<s4<<" : "<<Di<<"\n\n";
                infile<<"BARTENDERS : "<<s7<<" : "<<Ba<<"\n\n";
                infile<<"SERVES : "<<s5<<"Good"<<"\n\n";
                infile<<"HOSTS : "<<s6<<"Nice Job"<<"\n\n";
                remove("info.txt");
                rename("temp.txt","info.txt");
                            break;





                 case 4:

                    Di=Di+staff_adding;
                 infile<<"MANAGER : "<<s1<<" : "<<M<<"\n\n";
                infile<<"CHEFS : "<<s2<<" : "<<Ch<<"\n\n";
                infile<<"COOKS : "<<s3<<" : "<<Co<<"\n\n";
                infile<<"DISHWASHERS : "<<s4<<" : "<<Di<<"\n\n";
                infile<<"BARTENDERS : "<<s7<<" : "<<Ba<<"\n\n";
                infile<<"SERVES : "<<s5<<"Good"<<"\n\n";
                infile<<"HOSTS : "<<s6<<"Nice Job"<<"\n\n";
                remove("info.txt");
                rename("temp.txt","info.txt");
                            break;





                 case 5:

                        Ba=Ba+staff_adding;
                 infile<<"MANAGER : "<<s1<<" : "<<M<<"\n\n";
                infile<<"CHEFS : "<<s2<<" : "<<Ch<<"\n\n";
                infile<<"COOKS : "<<s3<<" : "<<Co<<"\n\n";
                infile<<"DISHWASHERS : "<<s4<<" : "<<Di<<"\n\n";
                infile<<"BARTENDERS : "<<s7<<" : "<<Ba<<"\n\n";
                infile<<"SERVES : "<<s5<<"Good"<<"\n\n";
                infile<<"HOSTS : "<<s6<<"Nice Job"<<"\n\n";
                remove("info.txt");
                rename("temp.txt","info.txt");
                            break;






		}
		readfile.close();       //closing
		infile.close();
		}
};
// .....2 : for how many things we have and types
class Equipment{
	private:
		string equipment1[35];      //range of equipments
        int number_of_qunatity;     //adding number of quantites
        int num;                    //a variable which is used to store a random value which we will use later

	public:
        ofstream data_write;

		void Equipments(){      //function for writing things we have

			cout<<"=> COMMERCIAL EQUIPMENT\n\n";
			cout<<"\tThere is many equipments in Restaurant some of the major equipment which we have now.I'll tell you";
			equipment1[1]="Range"; equipment1[2]="Oven"; equipment1[3]="Grill"; equipment1[4]="Deep-fryer"; equipment1[5]="Reach-in cooler";
			equipment1[6]="Walk-in cooler"; equipment1[7]="Freezer (either a chest, upright, or walk-in)"; equipment1[8]="Sauté pans";
			equipment1[9]="Stock/soup pots"; equipment1[10]="Saucepans"; equipment1[11]="Baking sheets"; equipment1[12]="Pizza screens";
			equipment1[13]="Baking pans"; equipment1[14]="Tongs"; equipment1[15]="Spatulas"; equipment1[16]="Ladles"; equipment1[17]="Chef’s knives";
			equipment1[18]="Pizza paddle"; equipment1[19]="Whisks"; equipment1[20]="Mixing bowls"; equipment1[21]="Plastic inserts for coolers";
			equipment1[22]="Steam table"; equipment1[23]="Entrée plates"; equipment1[24]="Pasta bowls"; equipment1[25]="Appetizer plates";
			equipment1[26]="Salad plates"; equipment1[27]="Dessert plates"; equipment1[28]="Metal or plastic shelves for walk-in cooler";
			equipment1[29]="Cleaning rags"; equipment1[30]="Cleaning buckets (specifically labeled for cleaning products)";
			equipment1[31]="Rubber floor mats"; equipment1[32]="Hand soap and sanitizer dispensers"; equipment1[33]="Fire extinguisher";
		}
		void Print(){
		    cout<<"Number of quantiy : Equipmnet";
		    srand(time(0));         //use on the basis of time giving a random value to our equpments
			for(int i=1;i<=33;i++){
                     //random number generator
                    num=rand()%50+1;
				cout<<equipment1[i]<<":"<<num<<endl;
			}
		}

		void data_sets_1(){         //writing data in file
			data_write.open("Equipments.txt");
			data_write<<"\n\n=> COMMERCIAL EQUIPMENT\n\n";
			data_write<<"\t\t\tHere is a general checklist of everything you need to outfit your restaurant kitchen\n\n";
			data_write<<"Number of equipment : Quantity "<<endl;
			for(int i=1;i<=33;i++){
				data_write<<equipment1[i]<<"  :  "<<num<<endl;
			}
			data_write.close();
		}
		void editing()      //changing in equipments
		{
            data_write.open("Equipments.txt");

		    int eq_quantity,eq_name;
		    cout<<"Which euipment you want to add  number of quantity please Write down below : eq_name"<<endl;
		    cin>>eq_name;
		    cout<<"How many equipment you want to add : "<<endl;
		    cin>>eq_quantity;
		    num=eq_quantity;
		    data_write<<equipment1[eq_name]<<" : "<<num<<endl;
            data_write.close();
		}

};

class About_us      //details about our locations
{

public:

    About_us()
    {
        ofstream out;
        out.open("About.txt");

			cout<<"=> BABA WALI RESTAURANT\n\n";
			out<<"=> BABA WALI RESTAURANT\n\n";
			out.close();

    }
    void write(){
        ofstream out;
        out.open("About.txt");
    cout<<"Enjoy our dazzling dishes and make the most of your eating background with us!"<<endl;
    out<<"Enjoy our dazzling dishes and make the most of your eating background with us!"<<endl;
    out.close();
    }
};
class Location:public About_us
{
public:
    void locate()
    {
        ofstream out;
        out.open("About.txt");
        out<<"Our location is phase 1 Hayatabd"<<endl;
        out<<"Contact number is 00000000000"<<endl;
        out<<"Email id  restaurant@gmail.com"<<endl;
         cout<<"Our location is phase 1 Hayatabd"<<endl;
        cout<<"Contact number is 00000000000"<<endl;
        cout<<"Email id  restaurant@gmail.com"<<endl;
    out.close();
    }

};
class Feedback
{
private:
    string fd;      //for feedback
public:
    void for_feedback(){
    cout<<"...Hope you enjoy it ...."<<endl;
    cout<<"...Enter a some feedback about us..."<<endl;
    cin>>fd;
    cout<<"Thank you very much"<<endl;
    }

};
int order_food_choice;        //choice for type selection of food

class Menu
{
      public:           // Public data members
      int order_food;
      void Menu_card()        //Function to display Menu_card
      {
            cout<<"\t\tMENU CARD\n";
		cout<<endl;
		cout<<"1) Bar.B.Q"<<endl;
		cout<<"2) FAST Food"<<endl;
		cout<<"3) Rolls"<<endl;
		cout<<"4) Fish"<<endl;
		cout<<"5) Ice-cream"<<endl;
            cout<<"6) Cold-Drink"<<endl;
            cout<<"choose type of food to you like to order (1-6)"<<endl;
		cin>>order_food;
            order_food_choice=order_food;
      }
};
class Bar_B_Q : public Menu         //child class Bar_B_Q of Menu
{
      public:
      void Filewrite()
      {
            ofstream fwrite;        //Creating file and entering data about Bar_B_Q
            fwrite.open("Bar_B_Q.txt");
            fwrite << "Guilt Free BBQ Chicken        500\nPaneer Afghani                700\nBhunne Besan Ka Murgh Tikka   900\nMutton Shashlik               950\nSeekh Kebab with Seb Pyaaz ki 600\n";
            fwrite.close();
            // cout<<"Data written in file \n";
      }
      void Fileread()
      {
            int choice;
            string Array[4],line;
            // cout<<"Reading"<<endl;
            ifstream fread;
            fread.open("Bar_B_Q.txt");    //reading file data about Bar_B_Q
            for(int i=0;i<4;i++)
            {
                  getline(fread, line);
                  Array[i]=line;
                  cout<<i+1<<")"<<line<<endl;
            }
            char decision;
            cout<<"Do you want anything? press(y/n) \n";         //Asking to using taking anthything again
            cin >> decision;
            while (decision =='y')
            {
                  cout<<"Enter your choice which do you want: (1-4)";
                  cin >> choice;
                  if(choice<=4)
                  {
                        ofstream fwrite;
                        fwrite.open("Order.txt", ios::app);       //Operations to creat final bill
                        fwrite <<"\n"<< Array[choice-1];
                        cout<<"Do you want anything more? (y/n) \n";
                        cin >> decision;
                  }
                  else
                  cout<<"Inavlid Choice!!\nTry Again\n";
            }
      }
};
//---------------------------New class
class FAST_Food : public Menu  //child class Bar_B_Q of Menu
{
      public:
      void Filewrite()
      {
            ofstream fwrite;        //Creating file and entering data about FAST_Food
            fwrite.open("FAST_Food.txt");
            fwrite << "\tBurgers\nBeef Burger                   200\nSpicy Tandoori                250\nCheese Burger                 270\nCricpy Chicken Burger         300\n";
            fwrite << "\tShawarma\nRegular Shawarma              110\nChickenTikka Regular Shawarma 150\nHot & Spicy Chicken Shawarma  140\nIttalian Chicken Shawarma     300\n";
            fwrite.close();
            // cout<<"Data written in file \n";
      }
      void Fileread()
      {
            int choice;
            string Array[8],line;
            // cout<<"Reading"<<endl;
            ifstream fread;
            fread.open("FAST_Food.txt");  //reading file data about FAST_Food
            for(int i=0;i<8;i++)
            {
                  getline(fread, line);
                  Array[i]=line;
                  cout<<i+1<<")"<<line<<endl;
            }
            char decision;
            cout<<"Do you want anything? press (y/n) \n";         //Asking to using taking anthything again
            cin >> decision;
            while (decision=='y')
            {
                  cout<<"Enter your choice Except 1 and 5 which do you want: (2-8)";
                  cin >> choice;
                  if(choice<=8)
                  {
                        ofstream fwrite;
                        fwrite.open("Order.txt", ios::app);             //Operations to creat final bill
                        fwrite <<"\n"<< Array[choice-1];
                        cout<<"Do you want anything more? (y/n) \n";
                        cin >> decision;
                  }
                  else
                  cout<<"Inavlid Choice!!\nTry Again\n";
            }
      }
};
//---------------------------------------------
class Rolls : public Menu           //child class Rolls of Menu
{
      public:
      void Filewrite()
      {
            ofstream fwrite;              //Creating file and entering data about Rolls
            fwrite.open("Rolls.txt");
            fwrite << "Cheeze Roll                   130\nVeg Roll                      100\nPaneer Roll                   170\nPaneer Mayo Roll              180\n";
            fwrite.close();
            // cout<<"Data written in file \n";
      }
      void Fileread()
      {
            int choice;
            string Array[4],line;
            // cout<<"Reading"<<endl;
            ifstream fread;
            fread.open("Rolls.txt");            //reading file data about Rolls
            for(int i=0;i<4;i++)
            {
                  getline(fread, line);
                  Array[i]=line;
                  cout<<i+1<<")"<<line<<endl;
            }
            char decision;
            cout<<"Do you want anything press? (y/n) \n";         //Asking to using taking anthything again
            cin >> decision;
            while (decision=='y')
            {
                  cout<<"Enter your choice which do you want: (1-4)";
                  cin >> choice;
                  if(choice<=4)
                  {
                        ofstream fwrite;
                        fwrite.open("Order.txt", ios::app);       //Operations to creat final bill
                        fwrite <<"\n"<< Array[choice-1];
                        cout<<"Do you want anything more?  (y/n) \n";
                        cin >> decision;
                  }
                  else
                  cout<<"Inavlid Choice!!\nTry Again\n";
            }
      }
};
//-------------------------------------
class Fish : public Menu            //child class Fish of Menu
{
      public:
      void Filewrite()
      {
            ofstream fwrite;        //Creating file and entering data about Fish
            fwrite.open("Fish.txt");
            fwrite << "Baam Fish                     700\nSole Fish                     870\nHamour Fish                   970\nShangari Fish                 790\n";
            fwrite.close();
            // cout<<"Data written in file \n";
      }
      void Fileread()
      {
            int choice;
            string Array[4],line;
            // cout<<"Reading"<<endl;
            ifstream fread;
            fread.open("Fish.txt");             //reading file data about Fish
            for(int i=0;i<4;i++)
            {
                  getline(fread, line);
                  Array[i]=line;
                  cout<<i+1<<")"<<line<<endl;
            }
            char decision;
            cout<<"Do you want anything? press (y/n) \n";         //Asking to using taking anthything again
            cin >> decision;
            while (decision=='y')
            {
                  cout<<"Enter your choice which do you want: (1-4)";
                  cin >> choice;
                  if(choice<=4)
                  {
                        ofstream fwrite;
                        fwrite.open("Order.txt", ios::app);             //Operations to creat final bill
                        fwrite <<"\n"<< Array[choice-1];
                        cout<<"Do you want anything more? (y/n) \n";
                        cin >> decision;
                  }
                  else
                  cout<<"Inavlid Choice!!\nTry Again\n";
            }
      }
};
//---------------------------------
class Ice_cream : public Menu       //child class Ice_cream of Menu
{
      public:
      void Filewrite()
      {
            ofstream fwrite;        //Creating file and entering data about Ice_cream
            fwrite.open("Ice_cream.txt");
            fwrite << "Chocolate Flavor              400\nPine Apple Flavor             500\nStrabwerry Flavor             450\nKulfa Flavor                  350\n";
            fwrite.close();
            // cout<<"Data written in file \n";
      }
      void Fileread()
      {
            int choice;
            string Array[4],line;
            // cout<<"Reading"<<endl;
            ifstream fread;
            fread.open("Ice_cream.txt");        //reading file data about Ice_cream
            for(int i=0;i<4;i++)
            {
                  getline(fread, line);
                  Array[i]=line;
                  cout<<i+1<<")"<<line<<endl;
            }
            char decision;
            cout<<"Do you want anything? press (y/n) \n";         //Asking to using taking anthything again
            cin >> decision;
            while (decision=='y')
            {
                  cout<<"Enter your choice which do you want: (1-4)";
                  cin >> choice;
                  if(choice<=4)
                  {
                        ofstream fwrite;
                        fwrite.open("Order.txt", ios::app);       //Operations to creat final bill
                        fwrite <<"\n"<< Array[choice-1];
                        cout<<"Do you want anything more? (y/n) \n";
                        cin >> decision;
                  }
                  else
                  cout<<"Inavlid Choice!!\nTry Again\n";
            }
      }
};
//----------------------------
class Cold_Drink : public Menu            //child class Cold_Drink of Menu
{
      public:
      void Filewrite()
      {
            ofstream fwrite;        //Creating file and entering data about Cold_Drink
            fwrite.open("Cold_Drink.txt");
            fwrite << "Coca cola                     100\nFanta                         100\nSeven-Up(7up)                 100\nSprite                        100\n";
            fwrite.close();
            // cout<<"Data written in file \n";
      }
      void Fileread()
      {
            int choice;
            string Array[4],line;
            // cout<<"Reading"<<endl;
            ifstream fread;
            fread.open("Cold_Drink.txt");       //reading file data about Cold_Drink
            for(int i=0;i<4;i++)
            {
                  getline(fread, line);
                  Array[i]=line;
                  cout<<i+1<<")"<<line<<endl;
            }
            char decision;
            cout<<"Do you want anything? press (y/n) \n";               //Asking to using taking anthything again
            cin >> decision;
            while (decision=='y')
            {
                  cout<<"Enter your choice which do you want: (1-4)";
                  cin >> choice;
                  if(choice<=4)
                  {
                        ofstream fwrite;
                        fwrite.open("Order.txt", ios::app);             //Operations to creat final bill
                        fwrite <<"\n"<< Array[choice-1];
                        cout<<"Do you want anything more? (y/n) \n";
                        cin >> decision;
                  }
                  else
                  cout<<"Inavlid Choice!!\nTry Again\n";
            }
      }
};
//------------------------------------------------------
class About_User        //new class to take info about user
{
      private:
      string city,Phone_num,area;         //private data members
      char Feedback[100];
      public:                       //members function to intialize data members
      void Address()
      {
            cout<<"Enter Your city Please: ";
            cin >> city;
      }
      void Phone_Number()
      {
            cout<<"Enter Your Phone_Num Please: ";
            cin >> Phone_num;
      }
      void Area()
      {
            cout<<"Enter Your area Please: ";
            cin >> area;
      }

      void Get()        //member function to writing data in file
      {
            string Line;
            ofstream fwrite;
            fwrite.open("About_User.txt");
            fwrite<<"Your Address "<<city<<endl<<"Your Phone Number "<<Phone_num<<"\n"<<"Your Area  "<<area<<endl;
      }

};
//---------------------------------------------------------------
class Bill              //class to creating final bill
{
      public:
      void showItemTaken()                //function to show the items which taken by customer
      {
            string Line;
            ifstream read;
            cout<<"\n\n\n\n\tYour Final Bill in PKR.\n\n";
            read.open("Order.txt");
            cout<<"\t ::You    have   oder::\n\t ::The Following Things::\n";
            getline(read,Line);
            while(!read.eof())
            {
                  getline(read, Line);
                  cout<<":"<<Line<<":\n";
            }
            cout<<"\n\n";
      }

      void show()             //members ftn to show the calculed bill
      {
            int tax;
            char membership;
            string Line;
            int bill=0,dis,new_bill;
            ifstream read;
            read.open("Order.txt");
            getline(read,Line);
            while(!read.eof())
            {
                  string strNums="";
                  int x = 0;
                  getline(read, Line);
                  for(int i=0;i<34;i++)
                  {
                        if(i<30)
                        {
                              continue;
                        }
                        else
                        {
                              strNums=strNums+Line[i];

                        }
                  }
                  //--------------------------Now conversion str to int
                  stringstream geek(strNums);
                  // it to the integer x
                  geek >> x;
                  bill=bill+x;
            }
            tax=bill*0.05;          //tax applying
            bill=bill+tax;
            cout<<"Your Bill is = "<<bill<<endl;
            cout<<"\nHave You Memership Card?  (y/n)";                  //dicount for if Memership Card have
            cin >> membership;
            if (membership=='y'||membership=='Y')
            {
                  cout<<"\tAs you have mebership \n\tWe   will   give  you\n\tSpecial Discount.\n";
                  dis=bill*0.15;
                  new_bill=bill-dis;
                  cout<<"Tax charges are applied & Your Tax is "<<tax<<"\n";
                  cout<<"\nAfter 15 percent dicount  your Finillized bill is: "<<new_bill;
            }
            else
            {
                  cout<<"Tax charges are applied & Your Tax is "<<tax<<"\n";
                  cout<<"\nOK!! No Problem\nYour Finilized Bill = "<<bill;

            }
            read.close();
            //----------------Deleting File To save the data merge with previus result
            remove("Order.txt");
      }
      //----------------------------------About User--------------------------------
      void Show_User_info()               //Information about customer showing
            {
                  string line;
                  ifstream fread;
                  fread.open("About_User.txt");
                  cout<<"\n\n\tAbout Customer Information "<<endl;
                  for(int i=0;i<3;i++)
                  {
                        getline(fread, line);
                        cout<<line<<endl;
                  }
                  fread.close();
            }
};

int main()
{
    int press; // a variable which is used to editing in other stuff we will use it below

     Resturant R1;      //class object
    R1.Main();
      if (first_choice==1){
        ADMIN adm_obj;
        adm_obj.display();
        if(admin_choice==1)
        {
        Staff_Business staff_obj;
        staff_obj.Detail_Staff();
        staff_obj.Manager();
        staff_obj.Chefs();
        staff_obj.Cooks();
        staff_obj.Hosts();
        staff_obj.Bartenders();
        staff_obj.Serves();
        staff_obj.Dishwashers();
        staff_obj.save_data();
         cout<<"*...if you want to changing in number of stuff press 1 :...*"<<endl;
        cin>>press;
        if(press==1)
        {
            staff_obj.editing_in_staff();
        }else
            {cout<<"*...Ok...*";}

    }
    if(admin_choice==2)
    {
        int press;
        Equipment eq_obj;
        eq_obj.Equipments();
        eq_obj.Print();
        eq_obj.data_sets_1();
        cout<<"*...if you want to add number of quantiy in euipment press 1 :...*"<<endl;
        cin>>press;
        if(press==1)
        {
            eq_obj.editing();
        }else
            {cout<<"ok";}
    }
    if(admin_choice==3)
    {
        About_us abou_obj;
        Location loc_obj;
        loc_obj.write();

        loc_obj.locate();
    }}


      if(first_choice==2)           //if customer chose 1 for order then following operation will perform
      {
            Menu m1;
      char decision;
      Bar_B_Q bar1;
      FAST_Food food;
      Rolls roll;
      Fish fish;
      Ice_cream iceCream;
      Cold_Drink Coldrink;
      Bill bill;
      About_User obj;
            cout<<"Do you want take anything (y/n)? choose from Manu card ";  //pressing y if to proceed fo order
            cin >> decision;
            for(int i=0;i<7;i++)
            {
                  if (decision=='Y'||decision=='y')
                  {
                        m1.Menu_card();
                        switch (order_food_choice)          // decisions taking by customer which food he wants to select
                        {
                              case 1:
                                    bar1.Filewrite();
                                    bar1.Fileread();
                                    break;
                              case 2:
                                    food.Filewrite();
                                    food.Fileread();
                                    break;
                              case 3:
                                    roll.Filewrite();
                                    roll.Fileread();
                                    break;
                              case 4:
                                    fish.Filewrite();
                                    fish.Fileread();
                                    break;
                              case 5:
                                    iceCream.Filewrite();
                                    iceCream.Fileread();
                                    break;
                              case 6:
                                    Coldrink.Filewrite();
                                    Coldrink.Fileread();
                                    break;
                              default:
                                    cout<<"Invalid choice!!\n";
                                    break;
                        }
                        cout<<"Do you want take anything (y/n)? choose from Manu card ";
                        cin >> decision;
                  }
                  else        //if customer not choose anything
                        {
                        cout<<"OK!! Thanks.\n";
                        break;
                        }
            }
            obj.Address(); //calling member function Address
            obj.Phone_Number(); //calling member function Phone_Number
            obj.Area(); //calling member function Area
            obj.Get();        //calling member function Get
            cout<<"\n\n\n---------------------------------------------------------------------------------------------------------------";
            //Calculation of final bill in PKR
            bill.showItemTaken();
            bill.show();
            bill.Show_User_info();
            cout<<"---------------------------------------------------------------------------------------------------------------------\n";

      }
if(first_choice==3)
{
    Feedback fe_obj;
    fe_obj.for_feedback();
}

      }


