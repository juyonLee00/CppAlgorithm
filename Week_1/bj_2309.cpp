#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9], sum = 0;

    for(int i=0; i<9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0; i<8; i++)
    {
        for(int j=1; j<9; j++)
        {
            if((sum - arr[i] - arr[j]) == 100)
            {
                arr[i] = arr[j] = 101;
                
                sort(arr, arr+9);

                for(int i=0; i<7; i++)
                {
                    cout << arr[i] << '\n';
                }

                return 0;
            }

        }
    }

    
}