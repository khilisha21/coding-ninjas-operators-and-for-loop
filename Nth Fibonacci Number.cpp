// Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
//     F(n) = F(n-1) + F(n-2), 
//     Where, F(1) =  1, 
//            F(2) = 1
// Provided N you have to find out the Nth Fibonacci Number.


#include<iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    
    int first = 0, second = 1, fib = 1;
    for(int i = 1; i < N; i++)
    {
        fib = first + second;
        first = second;
        second = fib;
    }
    cout << fib << endl;
}
