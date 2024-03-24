#include<iostream>
#include<queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    queue<int> q;

    cin >> n >> k;

    for(int i=1; i<=n; i++)
    {
        q.push(i);
    }

    cout << "<";
    while(!q.empty())
    {
        int num = 0;
        while(num != k-1)
        {
            int qNum = q.front();
            q.pop();
            q.push(qNum);
            num+=1;
        }
        cout << q.front();
        q.pop();
        if(q.size() != 0)
        {
            cout << ", ";
        }
    }
    cout << ">";    
}