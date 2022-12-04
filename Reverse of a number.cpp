// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.



#include<iostream>
using namespace std;

int main() {
	int N, i = 1;
    cin >> N;
    
    if(N == 0)
        cout << '0';
    while(N != 0)
    {
        int op = N % 10;
        if(op != 0 && i == 1){
            i++;
        	cout << op;
        }
        else if(op == 0 && i == 1){
            i = 1;
        }
        else{
            i++;
        	cout << op;
        }
        N = N/10;
    }
	
}
