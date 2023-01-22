#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;

vector<string> restoreIpAddresses(string s)
{
    vector<string> ans;
    string str;
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            for (int k = 1; k <= 3; k++)
                for (int l = 1; l <= 3; l++)
                    if (i + j + k + l == s.size())
                    {
                        int a = stoi(s.substr(0, i));
                        int b = stoi(s.substr(i, j));
                        int c = stoi(s.substr(i + j, k));
                        int d = stoi(s.substr(i + j + k, l));
                        if (a <= 255 && b <= 255 && c <= 255 && d <= 255)
                            if ((str = to_string(a) + "." + to_string(b) + "." + to_string(c) + "." + to_string(d)).size() == s.size() + 3)
                                ans.push_back(str);
                    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   vector<string>ans;
   string s;cin>>s;
     ans= restoreIpAddresses(s);
     for(auto a:ans)
     cout<<a<<" ";
    return 0;
}