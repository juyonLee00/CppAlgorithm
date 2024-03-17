#include<iostream>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[10] = {0}, ans=0;

    string str;
    cin >> str;

    for(int i=0; i<str.size(); i++)
	{
		int idx = str[i] - '0';
		if(idx == 9)
		{
			idx = 6;
		}
		arr[idx]+=1;
	}

		if(arr[6]%2 == 0)
            arr[6]/=2;
        else
            arr[6] = arr[6]/2+1;

		for(int i=0; i<10; i++)
		{
			ans = max(ans, arr[i]);
		}

    cout << ans;
    return 0;
}