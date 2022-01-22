#include<iostream>
#include<cstring>
using namespace std;
int main(void){
    char str1[] = "computer science";
    char str2[];
for(i=0; i<strlen(str1); i++){
str2[i] = str1[i];  
/*copies  str1 to str2 i.e. Computer 
Science to str2*/
str2[i]='\0'; 
// strings have null characters '\0' at the end
}
cout<<"\n String Copied Now is:"<<str2;

}