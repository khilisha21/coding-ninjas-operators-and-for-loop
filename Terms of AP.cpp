// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.


#include<iostream>
using namespace std;

int main() {
	int x;
    cin >> x;
    
    int N = 1, i = 1;
    while(i <= x)
    {
        int op = (3*N)+2;
        if(op%4 != 0){
            cout << op << ' ';
            i++;
        }        
        
        N++;
    }
	
}
