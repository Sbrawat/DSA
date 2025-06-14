#include <bits/stdc++.h>
using namespace std;

vector<int> divisors (int n) {

    vector<int> divVec;

    for(int i=1; i*i <= n; i++)
    {
        if (n%i == 0) 
        {
            divVec.push_back(i);
            if(i == n/i) break;
            divVec.push_back(n/i);
        }
    }

    sort(divVec.begin(), divVec.end());

    return divVec;
}

bool isPrime(int n) {
    //your code goes here
    if(n==1) return false;
    for (int i=2; i*i <= n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int HCF0(int n1,int n2) {
    int hcf = 1;

    for(int i=2; i<=n1 || i<=n2; i++)
    {
        if(isPrime(i))
        {
            if((n1%i==0) && (n2%i==0))
            {
                hcf *= i;
                n1 /= i;
                n2 /= i;
            }
        }
    }

    return hcf;
}

int HCF1(int n1, int n2){
    
    int hcf = 1;
    
    vector<int> f1 = divisors(n1);
    
    vector<int> f2 = divisors(n2);
    
    for(vector<int>::iterator it1 = f1.begin(); it1 != f1.end(); it1++)
    {
        for(vector<int>::iterator it2 = f2.begin(); it2 != f2.end(); it2++)
        {
            // cout << *it1 << " == " << *it2 << " -> " << (*it1 == *it2) << ", " << hcf <<  endl;
            if(*it1 == *it2) hcf = *it1;
        }
    }
    
    // cout << n1 << ',' << n2 << " -> " << hcf << endl;
    return hcf;
}

int HCF2(int n1, int n2)
{
    if(n2 == 0) return n1;
    
    return HCF2(n2, n2 % n1);
}
 
class Test 
{
    public:
    static void isPrimeTester(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " -> " << isPrime(i) << endl;
        }
        }
        static void HCF0(int boundary)
        {
            for(int i=1; i <= boundary; i++)
            {
                for(int j=1; j <= boundary; j++)
                {
                    cout << i << ',' << j << " -> " << ::HCF0(i, j) << endl;
                }
            }
        }
        static void HCF1(int boundary)
        {
            for(int i=1; i <= boundary; i++)
            {
                for(int j=1; j <= boundary; j++)
                {
                    cout << i << ',' << j << " -> " << ::HCF1(i, j) << endl;
                }
            }
        }
        static void HCF2(int boundary)
        {
            for(int i=1; i <= boundary; i++)
            {
                for(int j=1; j <= boundary; j++)
                {
                    cout << i << ',' << j << " -> " << ::HCF2(i, j) << endl;
                }
            }
        }
};

int main()
{
    Test::isPrimeTester(13);
    Test::HCF0(12);
    Test::HCF1(12);
    Test::HCF2(12);
    return 0;
}