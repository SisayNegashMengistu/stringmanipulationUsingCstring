#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    // 	Copying Array of Characters/Strings
char ASU[20] = "Computer Science";
cout<<ASU;
strcpy(ASU,"Information Science");
cout<<ASU;
// strncpy
char str1[] = "Computer Science";
char str2[] = "Information Science";
char str3[20]; 
//str3 can store up to 20 character of strings
// including ‘\0’
strncpy(str3,str2,11); 
// copies 11 characters from str2 to str3
str3[11] = '\0';
cout<<"String Copied: "<<str3;
strcpy(str3,str2);   //copies str2 to str3
cout<<"String Copied: "<<str3;
}