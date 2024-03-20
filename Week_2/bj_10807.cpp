#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, v;
    int arr[201] = {0};
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        arr[m+100]+=1;
    }
    cin >> v;
    
    cout << arr[v+100];
    return 0;
}