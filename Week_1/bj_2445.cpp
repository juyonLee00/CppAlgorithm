#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            cout << "*";
        for(int k=n-i; k>=1; k--)
            cout << " ";
        for(int m=n-i; m>=1; m--)
            cout << " ";
        for(int l=1; l<=i; l++)
            cout << "*";
        cout << '\n';
    }

    for(int i=1; i<=n-1; i++)
    {
        for(int j=n-i; j>=1; j--)
            cout << "*";
        for(int k=1; k<=i; k++)
            cout << " ";
        for(int m=1; m<=i; m++)
            cout << " ";
        for(int l=n-i; l>=1; l--)
            cout << "*";
        cout << '\n';
    }
}