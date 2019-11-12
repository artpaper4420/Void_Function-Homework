#include <iostream>
#include <stdlib.h>
using namespace std;
int first();
int arrsize;
void second(int []);
void third(int []);
void choice(int []);



int main()
{
int age [arrsize];
    first();
    second(age);
    third(age);
    choice(age);
    return 0;
}
int first(){
cout << "enter array size maximum of 4"<<endl;
cin >> arrsize;
return (arrsize);
}
void second(int age[]){

for (int i=0;i<=arrsize-1;i++){
    cout << "enter value for position"<< i+1<<":";
    cin >> age[i];
}
}
void third (int age[]){
for (int i=0;i<=arrsize-1;i++){
    cout << "the value are"<<i+1<<":"<<age[i]<<endl;


}
}

void choice (int age[]){
int choice;
system ("CLS");
cout << "Enter the position that you want to call"<<endl;
cin >> choice;
if (choice==1){
    cout << "The value in that position is"<<age[0]<<endl;

}
else if (choice==2){
    cout << "The value in that position is "<<age[1]<<endl;

}
else if (choice==3){
    cout << "The value in that position is"<< age[2]<<endl;

}
else if (choice==4){
    cout<< "The value in that position is "<<age[3]<<endl;

}
}
