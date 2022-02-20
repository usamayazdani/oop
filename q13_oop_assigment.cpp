#include<iostream>
using namespace std;
int column=5;
int rows=10;
int read_and_store(string student_name[10],int result[10][5]){
    cout<<"Enter a student name here"<<endl;
for(int i=0; i<10; i++){

    cin>>student_name[i];


}


cout<<"Enter a student result here"<<endl;
for(int m=0; m<10; m++){
    cout<<"Enter a row here"<<endl;
    for(int k=0; k<5; k++){
        cin>>result[m][k];
    }
}
int i,j;
for( i=0; i<10; i++){
        cout<<student_name[i]<<":";


    for( j=0; j<5; j++){
        cout<<result[i][j]<<" ";

    }
    cout<<endl;
}return student_name[i],result[i][j];


}
void average_test(string student_name[10],int result[10][5]){
double percentage;
int i,j;
double class_average=0;

for( i=0; i<10; i++){

double score=0;
double average=0;

    for( j=0; j<5; j++){
        score+=result[i][j];

    }
        average=score/2;
        class_average+=average;
        cout<<"The average of  "<<student_name[i]<<"  is: "<<average;
        percentage=(score/500)*100;
        if (percentage>=90.0 && percentage<100){
    cout<<"The percentage of "<<student_name[i]<<" is : "<<" A"<<endl;
    }else if(percentage>=80.0&&percentage<=89.99){
            cout<<"The percentage of "<<student_name[i]<<" is : "<<" B"<<endl;}
            else if(percentage>=70.0&&percentage<=79.99){
            cout<<"The percentage of "<<student_name[i]<<" is : "<<" C"<<endl;}
            else if(percentage>=60.0&&percentage<=69.99){
            cout<<"The percentage of "<<student_name[i]<<" is : "<<" D"<<endl;}
            else if(percentage>=0.0&&percentage<=59.99){
            cout<<"The percentage of "<<student_name[i]<<" is : "<<" F"<<endl;}}
class_average=class_average/5;
cout<<"here is class average"<<class_average;
}
int main(){
string student_name[rows];
int result[10][5];
string grade[5];
read_and_store(student_name,result);
average_test(student_name,result);
}
