#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;

// we can check by calling this function that string is palindrome or not 
bool ispalindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

void solve(string s, vector<string> &temp, vector<vector<string>> &ans, int index)
{
    if (index == s.size())
       {
        ans.push_back(temp);
        return;
       }
    for (int i = index; i < s.size(); i++)
    {
        if (ispalindrome(s, index, i))
        {
            temp.push_back(s.substr(index, i - index + 1));
            solve(s, temp, ans, i + 1);
            temp.pop_back();  // this is for backtraking after work complete we have to clear temp vector
        }
    }
}
vector<vector<string>> que(string s)
{
    vector<vector<string>> ans;
    vector<string> temp;
    solve(s, temp, ans, 0);
    return ans;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    vector<vector<string>> ans = que(s);
    for(auto a:ans){
        for(auto b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }

    return 0;
}