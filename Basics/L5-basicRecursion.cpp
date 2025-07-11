#include <bits/stdc++.h>
using namespace std;

//Stack Overflow
void overflow(int n)
{
    if (n == 3) return;
    cout << n << endl;
    overflow(++n);
}

//Print Name N times
void printName(string name, int i, int n)
{
    if(i > n) return;
    cout << name << endl;
    printName(name, ++i, n);
}

//Print Linearly from 1-N
void printN(int i, int n)
{
    if (i > n) return;
    cout << i << endl;
    printN(++i, n);
}

//Print Linearly from N-1
void printReverseN(int n)
{
    if( n == 0) return;
    cout << n-- << endl;
    printReverseN(n);
}

//Print from 1-N (Backtracking)
void printNBackTrack(int n)
{
    if (n < 1) return;
    printNBackTrack(n-1);
    cout << n << endl;
}

//Print from N-1 (Backtracking)
void printReverseNBackTrack(int i, int n)
{
    if(i > n) return;
    printReverseNBackTrack(i+1, n);
    cout << i << endl;
}

//Sum of first N integers using Parameters
void NnumbersSum(int N, int sum){
    //your code goes here
    if(N<1) 
    {
        cout << sum << endl;
        return;
    }
    sum += N;
    NnumbersSum(N-1, sum);
}

//Sum of first N integers using parameters
int NnumbersSum1(int N, int sum){
    //your code goes here
    if(N<1) 
    {
        cout << sum << endl;
        return sum;
    }
    return NnumbersSum1(N-1, sum+N);
}

//Sum of first N integers in functional way.
int NnumbersSum2(int N)
{
    if(N<1) return 0;
    return (N + NnumbersSum2(N-1));
}

//Factorial of N numbers
int factorial(int N)
{
    if(N<1) return 1;
    return N * factorial(N-1);
}

int main()
{
    int fact = factorial(6);
    cout << fact << endl;

    // int sum = NnumbersSum2(6);
    // cout << sum << endl;
    
    // NnumbersSum1(6, 0);

    // printName("Ram", 1,  7);

    // printN(1, 113);

    // printReverseN(113);

    // printNBackTrack(1, 3);

    // printReverseNBackTrack(1, 3);

    // NnumbersSum(3, 0);



    return 0;
}