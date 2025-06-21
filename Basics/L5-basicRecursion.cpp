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
    cout << i++ << endl;
    printN(i, n);
}

//Print Linearly from N-1
void printReverseN(int n)
{
    if( n == 0) return;
    cout << n-- << endl;
    printReverseN(n);
}

int main()
{
    // printName("Ram", 1,  7);

    // printN(1, 113);

    // printReverseN(113);



    return 0;
}