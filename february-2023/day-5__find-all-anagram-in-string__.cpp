#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;

/*
// method -1
this method will give tle

void solve(string s1,string s2,vector<int>&ans){
    if(s2.size()>s1.size()){
        // ans.push_back(0);
       return;

    }
    sort(s2.begin(),s2.end());
    int n1=s1.size(),n2=s2.size();
    for(int i=0;i<n1-n2+1;i++){
          string temp=s1.substr(i,n2);
          sort(temp.begin(),temp.end());
          if(temp==s2)
          ans.push_back(i);
    }

}


*/

// method - 2
vector<int> solve(string s1, string s2)
{
    vector<int> v1(26, 0), v2(26, 0), ans;
    int n1 = s1.size(), n2 = s2.size();
    for (int i = 0; i < n2; i++)
    {
        v1[s2[i] - 'a']++;
    }
    // if(n2>n1)
    // return ans;

    int i = 0, j = 0;
    while (j < n1)
    {
        // v2.push_back(s1[j]-'a'+1);
        v2[s1[j] - 'a']++;
        if (j - i + 1 == n2)
        {
            if (v2 == v1)
            {
                ans.push_back(i);
            }
        }
        if (j - i + 1 < n2)
        {
            j++;
        }
        else
        {
            v2[s1[i] - 'a']--;
            j++;
            i++;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;

    //   vector<int>ans;
    //   solve(s1,s2,ans);
    //   for(auto a:ans)
    //   cout<<a<<" ";

    vector<int> ans = solve(s1, s2);
    for (auto a : ans)
        cout << a << " ";
    return 0;
}

// question
/*
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.



Example 1:

Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
Example 2:

Input: s = "abab", p = "ab"
Output: [0,1,2]
Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".


Constraints:

1 <= s.length, p.length <= 3 * 104
s and p consist of lowercase English letters.

*/