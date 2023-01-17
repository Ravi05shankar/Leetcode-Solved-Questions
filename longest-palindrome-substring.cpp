#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;

 string longestPalindrome(string s) {
          int l,h;
        int start=0,end=1;
        for(int i=1;i<s.size();i++){
            l=i-1,h=i;
            while(l>=0 && h<s.size() && s[l]==s[h]){
                if(h-l+1 >end){
                start=l,end=h-l+1;
                }
            
            l--;
            h++;
            }
            // odd length palindrome substring
           l=i-1,h=i+1;
            while(l>=0 && h<s.size() && s[l]==s[h]){
                if(h-l+1>end){
                start=l,end=h-l+1;
                }
            
            l--;
            h++;
            }
        }
        string str;
        for(int i=start;i<start+end;i++){
            str+=s[i];
        }
        // print(s,start,start+end-1);
        return str;
    }
        
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   string s;cin>>s;
   cout<<longestPalindrome(s)<<endl;
    return 0;
}