#include <iostream>
using namespace std;

void p1(int n)
{
    for(int i=1; i<n; i++)
    {
        for (int j=1; j<n; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

void p2(int n) {
	// Write your code here.
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

int main()
{
    p2(3);

    return 0;
}