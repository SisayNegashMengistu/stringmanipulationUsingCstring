#include<iostream>
#include<cstring>
using namespace std;
int main(void){
//strcmp compares strings
//compares abc with def
cout << strcmp("abc", "def") << endl; //-1

cout << strcmp("abc", "ABC") << endl; //
//compares abc with ABC
//strncmp compares specified number of characters, 
//does not compare characters after a terminating null character
cout << strncmp("abc", "def", 2) << endl;
cout << strncmp("abc", "abcdef", 5) << endl;

}