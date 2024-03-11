#include<iostream>
#include<string>
#define MAX 10000

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[MAX] = {0};

    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int yN = 0, mN = 0;

    for(int i=0; i<n; i++)
    {
        yN += (arr[i] / 30 + 1) * 10;
        mN += (arr[i] / 60 + 1) * 15;
    }

    if(yN == mN)
        cout << "Y M " << yN;
    else if(yN < mN)
        cout << "Y " << yN;
    else
        cout << "M " << mN;


}
/*
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ySum = 0, mSum = 0, nRes;
    string res;

    cin >> n;

    while(n--)
    {
        int num;
        cin >> num;

        int yN = 0, mN = 0, ySecond = 30, yPay = 10, mSecond = 60, mPay = 15;

        yN = (num / ySecond) * yPay;
        yN += (((num - yN) != 0) ? yPay : 0);

        mN = (num / mSecond) * mPay;
        mN += (((num - mN) != 0) ? mPay : 0);

        ySum += yN;
        mSum += mN;
    }

    if(ySum == mSum)
    {
        res = "Y M";
        nRes = ySum;
    }
    else
    {
        res = ySum > mSum ? "M" : "Y";
        nRes = ySum > mSum ? mSum : ySum;
    }

    cout << res << " " << nRes;
    return 0;
}*/