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


int main()
{
    // printName("Ram", 1,  7);

    // printN(1, 113);

    // printReverseN(113);

    // printNBackTrack(1, 3);

    // printReverseNBackTrack(1, 3);



    return 0;
}