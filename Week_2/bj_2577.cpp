#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    long long sum;
    string str;
    int arr[10] = {0};

    cin >> a >> b >> c;

    sum = a * b * c;

    str = to_string(sum);

    for(int i=0; i<str.size(); i++)
    {
        arr[str[i]-'0']+=1;
    }

    for(int i=0; i<10; i++)
        cout << arr[i] << '\n';
    
    return 0;

}