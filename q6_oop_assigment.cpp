#include<iostream>
#include<fstream>
using namespace std;
int main(){
char right_answer[21]="TFFTFFTTTTFFTFTFTFTT";
ofstream fout;
fout.open("test.txt"); 			//general file
fout<<"correct answer :"<<right_answer<<endl;

char student_id[21];
char student_answer[21];
int counter=0;
while (counter<=150){

cout<<"Enter a student id here "<<endl;
cin.getline(student_id,21);
cout<<"Enter a student answer here and "<<endl;
cin.getline(student_answer,21);
fout<<student_id<<student_answer<<endl;
int count1=0;
for(int i=0; i<20; i++){
   if(student_answer[i]==right_answer[i]){
       count1=count1+2;
   }
    else if(student_answer[i]==' '){
   count1=count1;
   }else if(student_answer[i]!=right_answer[i]){
        count1=count1-1;
   }else
        cout<<"you enter a wrong value"<<endl;

}
double percentage;
percentage=(count1/20)*100;

if (percentage>90.0 && percentage<100){
    cout<<student_id<<" : student answer "<<student_answer<<" test score :"<<count1<<" test grades : "<<"A"<<endl;
}else  if (percentage>=80.0&&percentage<=89.99){
    cout<<student_id<<" : student answer "<<student_answer<<" test score :"<<count1<<" test grades : "<<"B"<<endl;
}else  if (percentage>=70.0 &&percentage<=79.99){
    cout<<student_id<<" : student answer "<<student_answer<<" test score :"<<count1<<" test grades : "<<"C"<<endl;
}else if (percentage>=60.0 &&percentage<=69.99){
    cout<<student_id<<" : student answer "<<student_answer<<" test score :"<<count1<<" test grades : "<<"D"<<endl;
} else if (percentage>=0.0 &&percentage<=59.99){
    cout<<student_id<<" : student answer "<<student_answer<<" test score :"<<count1<<" test grades : "<<"F"<<endl;
}
int enter;
cout<<"if you want loop is finished, enter 0 and for continue 1"<<endl;cin>>enter;
if (enter==1){
    continue;
}else if (enter==0){
break;
}
counter++;

fout.close();
}}
