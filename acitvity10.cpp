#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;
int numbernames=2;
int first();
void first_names(string [], string [], int [], int [], string[], string []);
int main()
{
     first();
    return 0;
}
int first(){
     string age [numbernames];
     string lname [numbernames];
     int taon [numbernames];
     int cpnum [numbernames];
     string address [numbernames];
     string emeyl[numbernames];
     cout<< "\t\t\t\tActivity 10\n";
 first_names (age, lname, taon, cpnum, emeyl, address);
 return (numbernames);
 }
 void first_names(string age[],string lname[],int taon[],int cpnum[],string emeyl[], string address[]){

for (int i=0;i<=numbernames-1;i++){
    cout << "Enter first name"<< i+1<<":";
    cin >> age[i];
}

cout << "Please Enter Last Name"<<endl;
    for (int i=0;i<=numbernames-1;i++){
    cout << "Enter last name"<< i+1<<":";
    cin >> lname[i];
}
cout << "Please enter Age"<<endl;
for (int i=0;i<=numbernames-1;i++){
    cout<< "Enter age  "<<i+1<<":";
    cin>> taon[i];
 }
 for (int i=0;i<=numbernames-1;i++){
    cout<< "Enter number "<<i+1<<":";
    cin>> cpnum[i];

 }
 for (int i=0;i<=numbernames-1;i++){
    cout<< "Enter email "<<i+1<<":";
    cin>> emeyl[i];
 }
 for (int i=0;i<=numbernames-1;i++){
    cout<< "Enter address "<<i+1<<":";
    cin>> address[i];
}
system ("CLS");
cout<<setw(5)<< "Lastname\t"<<setw(5)<<"Firstname\t"<<setw(5)<<"Age\t"<<setw(5)<<"Number\t"<<setw(5)<<"Email\t"<<setw(5)<<"Address";

for (int i=0; i<=numbernames;i++)


    cout << "\n"<<setw(5)<< lname[i]<< setw(18)<<age[i]<<setw(13)<<taon[i]<<setw(8)<<cpnum[i]<<setw(10)<<emeyl[i]<<setw(8)<<address[i];


}


