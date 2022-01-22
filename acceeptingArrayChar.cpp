#include<iostream>
using namespace std;
int main(){
    // 	Inserting Array of Characters/Strings
    char name[10][15];

    for(int i=0; i<10; i++)
{
cout<<"\n Enter name of the student "<<i+1<<":  ";
cin>>name[i];
}
cout<<endl;
// 	Displaying Array of Characters/Strings
cout<<"\n List of Name of student\n";
 for(int i=0; i<10; i++)
{

cout<<name[i]<<",";
}
    return 0;
}