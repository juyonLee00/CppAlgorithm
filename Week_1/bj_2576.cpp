#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[7], sum=0, oddNum = 0, min = 9999;

    for(int i=0; i<7; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 != 0)
        {
            oddNum += 1;
            sum += arr[i];

            if(arr[i] < min)
                min = arr[i];
        }
    }
    sort(arr, arr+7);
    if(oddNum) 
        cout << sum << '\n' << arr[0];
    else
        cout << "-1";
    return 0;
}