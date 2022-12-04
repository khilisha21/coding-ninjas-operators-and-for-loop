// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
// If C is equal to -
//  1, then print the sum
//  2, then print the product
//  Any other number, then print '-1' (without the quotes)



#include<iostream>
using namespace std;

int main() {
	int N, C, product = 1, i = 1;
    cin >> N;
    
    cin >> C;
    
    if(C == 1)
    {
        cout << (N*(N+1))/2 << endl;
    }
    else if(C == 2)
    {
        while(i <= N)
        {
            product *= i;
            i++;
        }
        cout << product << endl;
    }
    else
        cout << "-1" << endl;
	
}
