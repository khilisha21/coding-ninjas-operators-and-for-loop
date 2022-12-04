// Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
// That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
// Print count of characters, count of digits and count of white spaces respectively (separated by space).


#include<iostream>
using namespace std;

int main(){

    char c;
    c = cin.get();
    
    int digits = 0, characters = 0, spaces = 0;
    
    if(c >= 'a' && c <= 'z')
            characters++;
    else if(c >= '0' && c <= '9')
            digits++;
    else if(c == ' ' || c == '\t' || c == '\n')
            spaces++;
   
	while(c != '$')
    {
        c = cin.get();
        
        if(c >= 'a' && c <= 'z')
            characters++;
        else if(c >= '0' && c <= '9')
            digits++;
        else if(c == ' ' || c == '\t' || c == '\n')
            spaces++;
    }
  	cout << characters << ' ' << digits << ' ' << spaces << endl;
    
}


