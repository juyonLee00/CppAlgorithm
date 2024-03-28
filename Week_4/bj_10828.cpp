#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> s;

	int t;

	cin >> t;

	while(t--)
	{
		string str;
		cin >> str;

		if(str == "push")
		{
			int n;
			cin >> n;

			s.push(n);
		}		

		else if(str == "pop")
		{
			if(s.empty())
			{
				cout << -1 << '\n';
			}

			else
			{
				cout << s.top() << '\n';
                s.pop();
			}
		}

        else if(str == "size")
        {
            cout << s.size() << '\n';
        }

        else if(str == "empty")
        {
            if(s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }

        else if(str == "top")
        {
            if(s.empty())
                cout << -1 << '\n';
            
            else
                cout << s.top() << '\n';
        }
	}
}