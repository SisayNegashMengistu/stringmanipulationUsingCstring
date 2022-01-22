#include<iostream>
#include<cstring>
using namespace std;
int main(void){
//strncat function copies specified 
//number of characters
char s1[] = "Computer Science";
char s2[] = "Information Science";
cout<<"\n S1 is: "<<s1;
cout<<"\n S2 is: "<<s2;
strncat(s1,s2,8); //Concatenates s1 and s2
cout<<"\n Concatenated String  is: "<<s1;
s1[20] = '\0';
cout<<"\n Concatenated String  is: "<<s1;

}

