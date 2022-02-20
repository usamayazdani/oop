#include<iostream>
using namespace std;
int main(){
int rows=13,cloumn=6;
string rows_array[13]={"Row 1","Row 2","Row 3","Row 4","Row 5","Row 6","Row 7","Row 8","Row 9","Row10","Row11","Row12","Row13",};
string column_array[6]={"A","B","C","D","E","F"};
string  seat[13][6];
cout<<"           ";        //for printing the space
for(int i=0; i<6; i++){
    cout<<column_array[i]<<"      ";
}
cout<<endl;


for(int i=0; i<13; i++){
        cout<<rows_array[i]<<":";

    for(int j=0; j<6; j++){
        cout<<"     "<<"*"<<" ";
        seat[i][j]="*";

    }
    cout<<endl;
}
int ticket=1;

while(ticket==1){
string ticket_type,Desired_seat;
int line;
cout<<"Which type of ticket you want"<<endl;
cout<<"For first class write (FC) ,For buisness class write (BC),For economy class write (EC)"<<endl;
cin>>ticket_type;
if (ticket_type=="FC"||ticket_type=="BC"||ticket_type=="EC"){
    cout<<"You have two rows for first class:1 and 2"<<endl;
    cout<<"You have three to seven rows for buisness class:3 ,4,5,6,7"<<endl;
    cout<<"You have eight to thirteen rows for economy  class: 8 to 13"<<endl;
    cout<<"In which row you want to sit and the write in this format (1,2,3....)"<<endl;
    cin>>line;
    if (line==1 || line==2 ||line==3||line==4 || line==5 ||line==6 ||line==7 ||line==8 ||line==9 ||line==10 ||line==11 ||line==12 ||line==13 ){
        cout<<"Enter a desired seat A B C D E F"<<endl;
            cin>>Desired_seat;
            if (Desired_seat=="A"){
                    if(seat[line-1][0]=="*"){
                        seat[line-1][0]="x";
                    }
           else if(seat[line-1][0]=="x")cout<<"seat is already reserved";}

           else if (Desired_seat=="B"){


            if (seat[line-1][1]=="*"){
                seat[line-1][1]="x";}
                else if(seat[line-1][1]=="x")cout<<"seat is already reserved";}

            else if (Desired_seat=="C"){


            if (seat[line-1][2]=="*"){
                seat[line-1][2]="x";}else if(seat[line-1][2]=="x")cout<<"seat is already reserved";}

          else  if (Desired_seat=="D"){


            if (seat[line-1][3]=="*"){
                seat[line-1][3]="x";}else if(seat[line-1][3]=="x")cout<<"seat is already reserved";
                }else  if (Desired_seat=="E"){


            if (seat[line-1][4]=="*"){
                seat[line-1][4]="x";}else if(seat[line-1][4]=="x")cout<<"seat is already reserved";
                }else  if (Desired_seat=="F"){
            if (seat[line-1][5]=="*"){
                seat[line-1][5]="x";}else if(seat[line-1][5]=="x")cout<<"seat is already reserved";
                }}
        cout<<endl;
    for(int i=0; i<13; i++){
        cout<<rows_array[i]<<":";

    for(int j=0; j<6; j++){
         cout<<"     ";

       cout<< seat[i][j];

    }
    cout<<endl;
}

    }else cout<<"you entered a wrong vslue"<<endl;
    cout<<"if you want again function work press 1 else 0"<<endl;
    cin>>ticket;
    if (ticket==1){
        continue;
    }else if(ticket==0){
    break;
    }
    }
    }
    /*
    if (line=="1"){
            cout<<"Enter a desired seat A B C D E F"<<endl;
            cin>>Desired_seat;
            if (Desired_seat=="A"){
                seat[0][0]="X";
            }else if (Desired_seat=="B"){
                seat[0][1]="X";}
                else if (Desired_seat=="C"){
                seat[0][2]="X";}
                else if (Desired_seat=="D"){
                seat[0][3]="X";}
                else if (Desired_seat=="E"){
                seat[0][4]="X";}
                else if (Desired_seat=="F"){
                seat[0][5]="X";}
                else
                    cout<<"you entered a wrong value";


}else if (line=="2"){
            cout<<"Enter a desired seat A B C D E F"<<endl;
            cin>>Desired_seat;
            if (Desired_seat=="A"){
                    for(int i=0; i<2; i++){
                        seat[]
                    }
                seat[1][0]="X";
            }else if (Desired_seat=="B"){
                seat[1][1]="X";}
                else if (Desired_seat=="C"){
                seat[1][2]="X";}
                else if (Desired_seat=="D"){
                seat[1][3]="X";}
                else if (Desired_seat=="E"){
                seat[1][4]="X";}
                else if (Desired_seat=="F"){
                seat[1][5]="X";}
                else
                    cout<<"you entered a wrong value";

}
}else if (ticket_type=="BC"){
 cout<<"You have 3 to 7 rows"<<endl;
    cout<<"In which row you want to sit and the write in this format (1)"<<endl;
    cin>>line;
    if (line=="1"){
            cout<<"Enter a desired seat A B C D E F"<<endl;
            cin>>Desired_seat;
            if (Desired_seat=="A"){
                seat[2][0]="X";
            }else if (Desired_seat=="B"){
                seat[2][1]="X";}
                else if (Desired_seat=="C"){
                seat[2][2]="X";}
                else if (Desired_seat=="D"){
                seat[2][3]="X";}
                else if (Desired_seat=="E"){
                seat[2][4]="X";}
                else if (Desired_seat=="F"){
                seat[2][5]="X";}
                else
                    cout<<"you entered a wrong value";





}


}




*/
