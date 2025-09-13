//Recursion
#include <bits/stdc++.h>
using namespace std;

// step destination
void step(int src , int destination){
    if(src == destination){
        cout << "reached" << endl;
        return;
    }
    cout << src << " -> ";
    step(src + 1, destination);
}

// fibonacci series
int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

// factorial
int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}

// sum of N numbers
int sum(int n){
    if(n == 1) return 1;
    return n + sum(n-1);
}

// number of ways to reach nth stair (1 or 2 steps)
int stair(int n){
    if(n < 0) return 0;
    if(n == 0) return 1;
    return stair(n-1) + stair(n-2);
}

int main() {
    int n;

    // stair
    cout << "Enter n for stairs: ";
    cin >> n;
    cout << "Ways to reach " << n << "th stair: " << stair(n) << endl;

    // sum
    cout << "Enter n for sum: ";
    cin >> n;
    cout << "Sum is: " << sum(n) << endl;

    // factorial
    cout << "Enter n for factorial: ";
    cin >> n;
    cout << "Factorial is: " << factorial(n) << endl;

    // step
    cout << "Stepping from 1 to 5: ";
    step(1, 5);

    // fibonacci
    cout << "\nEnter nth number of fibonacci: ";
    cin >> n;
    cout << "Fibonacci is: " << fibonacci(n) << endl;

    return 0;
}
