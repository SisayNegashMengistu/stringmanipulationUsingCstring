#include<iostream>
using namespace std;
/*String in C++ is sequence of characters 
in which the last character is null character ‘\0’
 which indicates the end of string.
 ==============================
 String with n characters requires n+1 array 
 elements (size) to store it.
 */
void stringInput();//prototype
void acceptingLineofString();
void AcceptMultipleLineStrings();
void multiDimensionalXcs();
void multiDimeForLoop();
int main(){
// 	Declaration of Strings
    char str[30];
    char name[20];
    //Initialization of Strings
    char str1 [] = { 'H', 'e', 'l', 'l', 'o', '\0' }; 
    //6 characters including null character ‘\0’
    //what will be the size of the array.
    char str2[] = "Hello";  //string str2 initialized to Hello
char Str1[] = "Hello!"; 
// char Str1[7] = "Hello!";
char Str2[18] = "C++ Programming";
//why size is 18?
// 	Strings Output
//cout << "The string  is  " << Str1 << endl;
//Prints Hello!
// string inputs
//stringInput();
// 	Reading/Accepting a Line of Strings
//acceptingLineofString();
//AcceptMultipleLineStrings();
//multiDimensionalXcs();
multiDimeForLoop();
    return 0;
}
void stringInput(){
     	//Strings Input
char firstname[12], lastname[12];
cout << "\n Enter First name and Last name: ";
cin >> firstname;
cin>>lastname;
cout << "\n you are  "
<< firstname << " "
<< lastname;

}
//accepting  lines of strings.
void acceptingLineofString(){
char lineofstrg[100];
cout << "\n Enter A String:\n  ";
cin.get(lineofstrg,100);
cout << "\n The String Entered was  "<<lineofstrg;
}
// accepting multiple line of strings. using $
void AcceptMultipleLineStrings(){
    char s[400];
cout<<"Enter muliple line strings"<<endl;
cin.get(s,200,'$');
cout << "\n The Multiple Line of String Entered was  "<<s;
}
// 	Multi Dimensional Array of Characters
void multiDimensionalXcs(){
    char name[5][10] = {"Biruk","Tilahun","Rahel","John","Sultan"};
cout<<"\n Name of Students\n";
cout<<"\n Student 1: "<<name[0];  //Accesses Biruk
cout<<"\n Student 2: "<<name[1];  //Accesses Tilahun
cout<<"\n Student 3: "<<name[2];  //Accesses Rahel
cout<<"\n Student 4: "<<name[3];  //Accesses John
cout<<"\n Student 5: "<<name[4];  //Accesses Sultan

}
void multiDimeForLoop(){
    char name[5][10] = {"Biruk","Tilahun","Rahel","John","Sultan"};
cout << "\n  List of Name of Students:\n  ";
for(int i=0; i<5; i++)
{
cout<<"name["<<i<<"]:  ";
cout<<name[i]<<endl;
}

}