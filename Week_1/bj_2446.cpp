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
        for(int k=1; k<i; k++)
            cout << " ";
        for(int j=1; j<=2*(n-i+1)-1; j++)
            cout << "*";
        cout << '\n';
    }
    for(int i=1; i<=n-1; i++)
    {
        for(int k=1; k<n-i; k++)
            cout << " ";
        for(int j=1; j<=2*(i+1)-1; j++)
            cout << "*";
        cout << '\n';
    }
}