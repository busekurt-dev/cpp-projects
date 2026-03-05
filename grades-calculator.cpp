#include <iostream>
using namespace std;
float sumofgrades(int grade[10]){
float sum = 0;
for (int i = 0; i < 10; i++){
sum += grade[i];
}
 return sum;
}
void level(float a)
{
 if (a>89){
 cout<<"Your level is A!";
 }
 else if (a>79){
 cout<<"Your level is B!";
 }
 else if (a>69){
 cout<<"Your level is C!";
 }
 else if (a>59){
 cout<<"Your level is D!";
 }
 else if (a>49){
 cout<<"Your level is E!";
 }
 else{
 cout<<"Your level is F!";
 }
}
int main(){
 int grades[10];
 float sum = 0;
 float avg = 0;
 cout<<"Enter your 10 grades:"<<endl;
 for (int i=1; i<11;i++){
 cout<<"Enter "<<i<<" grade: ";
 cin>>grades[i-1];
 }
 sum = sumofgrades(grades);
 avg = sum/10;
 cout<<"The average is: "<<avg<<endl;
 level(avg);
}
