#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        list<char> strList={};
        list<char>::iterator it=strList.begin();

        for(auto i:str)
        {
            if(i == '-')
            {
                if(it != strList.begin())
                {
                    it--;
                    it=strList.erase(it);
                }
            }

            else if(i == '<')
            {
                if(it != strList.begin())
                {
                    it--;
                }
            }
            
            else if(i == '>')
            {
                if(it != strList.end())
                {
                    it++;
                }
            }
            else
            {
                strList.insert(it, i);
            }
        }
    for(auto i: strList)
            cout << i;
        cout << '\n';

}

}