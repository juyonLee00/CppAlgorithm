#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, ans=0;
	int arr[2][7] = {0};

	cin >> n >> k;

	while(n--)
	{
		int s, sNum;
		cin >> s >> sNum;

		arr[s][sNum]+=1;
	}

	for(int i=0; i<2; i++)
	{
		for(int j=1; j<7; j++)
		{
			if(arr[i][j]%k != 0)
			{
				ans += (arr[i][j]/k + 1);
			}
            else
                ans += arr[i][j]/k;
		}
	}

	cout << ans;
    
    return 0;
}