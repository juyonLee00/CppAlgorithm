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
        for(int j=n-i; j>=1; j--)
            cout << " ";
        for(int k=1; k<=i*2-1; k++)
            cout << "*";
        cout << '\n';
    }
}