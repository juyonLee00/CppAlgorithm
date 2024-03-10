#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5], avg, sum = 0, mid;

    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / 5;
    sort(arr, arr+5);
    mid = arr[2];
    cout << avg << '\n' << mid;

    return 0;
}