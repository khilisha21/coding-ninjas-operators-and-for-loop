// Given a decimal number (integer N), convert it into binary and print.
// The binary number should be in the form of an integer.
// Note: The given input number could be large, so the corresponding binary number can exceed the integer range.


#include<iostream>
using namespace std;

int main() {
	int N;
    long int sum = 0, op = 0, i = 1;
    cin >> N;
    
    if(N == 0)
        cout << op << endl;
    else{
    while(N != 0)
    {
        int r = N % 2;
        op = op + r*i;
        i = i * 10;
        N = N / 2;
    }
    
    cout << op;
    }
}
