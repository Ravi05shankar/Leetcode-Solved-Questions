#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;

class Solution
{
public:
    int minFlipsMonoIncr(string s)
    {
        int flip = 0, cnt1 = 0;
        for (auto a : s)
        {
            if (a == '1')
                cnt1++;
            else
                flip++;
            flip = min(flip, cnt1);
        }
        return flip;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    Solution ravi;
    cout << ravi.minFlipsMonoIncr(s) << endl;

    return 0;
}