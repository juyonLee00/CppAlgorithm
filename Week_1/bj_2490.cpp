#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str = "DCBAE";

    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<4; j++)
        {
            int n;
            cin >> n;
            sum += n;
        }

        cout << str[sum] << '\n';
    }
    return 0;
}