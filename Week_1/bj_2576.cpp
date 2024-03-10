#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int sum=0, min = 9999, oddNum = 0;

    for(int i=0; i<7; i++)
    {
        int n;
        cin >> n;
        if((n % 2) != 0)
        {
            oddNum += 1;
            v.push_back(n);
            sum += n;
        }
    }
    sort(v.begin(), v.end());
    if(oddNum == 0) 
        cout << "-1";
    else
        cout << sum << '\n' << v[0];
    return 0;
}

//풀이
//https://github.com/encrypted-def/basic-algo-lecture/blob/master/workbook/0x02.md