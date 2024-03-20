#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, ans=0;
    int arr[1000001] = {0};
    bool isNum[2000001] = {false};
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cin >> x;

    for(int i=0; i<n; i++)
    {
        if(x-arr[i] > 0 && isNum[x-arr[i]]) 
            ans+=1;
        isNum[arr[i]] = true;
    }
    cout << ans;

    return 0;
}