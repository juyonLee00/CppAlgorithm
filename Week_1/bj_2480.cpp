#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[3], answer = 0;

    for(int i=0; i<3; i++)
        cin >> arr[i];
    
    sort(arr, arr+3);

    if(arr[0] == arr[2])
        answer = 1000 * arr[0] + 10000;
    else if(arr[0] == arr[1] || arr[1] == arr[2])
        answer = 100 * arr[1] + 1000;
    else
        answer = arr[2] * 100;
    
    cout << answer;
    return 0;
}