# include <iostream>
# include <string.h>
# include <cstring>
# include <ctype.h>
# include <string>
using namespace std;


int main(){

    string a = "The weather was fine until yesterday.";
    string b = "Coding in C++ is super fun but Python is recommended for beginners.";
    
    b[3] = 'N'; // replaces the char at b[3] by 'N'
    cout<<b<<endl;

    b.front() = 'B'; // replaces b[0] by B 
    b.back() = '!'; // replaces b[b.size()-1] by !
    cout<<b<<endl;

    // addition of 2 strings
    string c = "Hi, ";
    b = c+b;
    cout<<b<<endl;

    b.push_back('?'); // push_back appends a single character at the end of the string
    cout<<b<<endl;

    cout<<b.size()<<" "<<b.length()<<endl; // gives the size of the string

    // compare functions will return 0 if r = s; 1 if r>s; -1 if r<s;
    int x = a.compare(b);
    cout<<x<<endl; 

    // make a string of length 5 consisting 'a' as all of its characters
    string d (5,'a');
    cout<<d<<endl;

    // copy one string to another string
    string e = d;
    cout<<e<<endl;



    // # include<string.h> header file functions

    // compare 2 strings without considering upper case and lower case difference
    // returns 0 if str1 = str2; -1 if str1<str2; 1 if str1 = str2 
    int x1 = _strcmpi("OrLAndO)","ORLANdo");
    cout<<x1<<endl;
    int x2 = _strcmpi("Tiger","Ginger");
    cout<<x2<<endl;
    int x3 = _strcmpi("Music","Vocals");
    cout<<x3<<endl;



    // # include <cstring> header file functions

    char str1[] = "Lal";
    char str2[] = "Bahadur";
    char str3[] = "Shastri";

    // strupr() converts char string to uppercase
    strupr(str1);
    cout<<str1<<endl;

    // strlwr() converts char string to lowercase
    strlwr(str1);
    cout<<str1<<endl;

    // strcat() concatenates 2 character strings
    strcat(str1,str2);
    cout<<str1<<endl;

    // strcpy() copies one char string to another char string
    char str4[] = "Abhishek";
    cout<<str4<<endl;
    strcpy(str4,str3); // str3 is copied to str4 and the previous data on str4 is rewritten
    cout<<str4<<endl;

    // reverses the char string
    strrev(str4);
    cout<<str4<<endl;



    // # include <ctype.h> header file functions

    char g[] = "NeW ZealAND";
    
    char h = tolower(g[2]); // converts the character to lower case
    cout<<h<<endl;
    cout<<(char)toupper(g[2])<<endl; // converts the character to upper case and then typecast it to character
    cout<<toupper(g[2])<<endl; // converts the character to upper case

    cout<<isupper(g[3])<<endl; // returns 0 if not upper case; 1 if true
    cout<<isupper(g[0])<<endl;

    cout<<islower(g[0])<<endl; // returns 0 if not lower case; 1 if true
    cout<<islower(g[1])<<endl;

    cout<<isalpha(g[0])<<endl; // returns 0 if char is not an alphabet; 1 if true

    cout<<isdigit(g[0])<<endl; // returns 0 if char is not a digit; 1 if true



    // # include <string> header file functions

    // insert function allows us to append a string at the desirable index
    string i = "Harman Baweja,";
    i.insert(0,"Master ");
    cout<<i<<endl;

    // erase(i,j) removes the characters from i to j
    // erase(i,) removes the character from i till end
    i.erase(0,1);
    cout<<i<<endl;

    string j = " Welcome!";
    i.append(j); //appends string j to string i
    cout<<i<<endl;

    // substr() takes out the char from the string from index (i to j] 
    string k = i.substr(0,5);
    cout<<k<<endl;

    // find_first/last_of() : If the value is found it returns the index of its first occurence otherwise returns absurd number
    string l = "Wakanda";
    cout<<l.find_first_of("d")<<endl;
    cout<<l.find_last_of("aka")<<endl;
    cout<<l.find_last_of("da")<<endl;
    cout<<l.find_last_of("I")<<endl; // absurd number
    // If we want to search from a particular index then
    cout<<l.find_last_of("aka",4)<<endl;

}