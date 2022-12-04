// Given a binary number as an integer N, convert it into decimal and print.



#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int N, i = 0, sum = 0;
    cin >> N;
    
    while(N != 0)
    {
        sum = sum + (N % 10) * pow(2, i);
        i++;
        N = N / 10;
    }
    
    cout << sum << endl;
	
}
