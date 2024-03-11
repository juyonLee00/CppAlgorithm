#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[21] = {0};

    for(int i=1; i<21; i++)
    {
        arr[i] = i;
    }

    int num = 10;
    while(num--)
    {
        int a, b;
        cin >> a >> b;
        reverse(arr+a, arr+b+1);
    }

    for(int i=1; i<21; i++)
        cout << arr[i] << ' ';
    return 0;


}