#include<iostream>
#include<cstring>
using namespace std;
int main(void){
char str1[] = "software";
char str2[] = " Engienering";
cout<<"\n String 1 is: "<<str1;
cout<<"\n String 2 is: "<<str2;
strcat(str1,str2); //Concatenates str1 and str2
cout<<"\n Concatenated String  is: "<<str1;
str1[20] = '\0';
cout<<"\n Concatenated String  is: "<<str1;
}