#include <bits/stdc++.h>
#define ll long long
#define vi vector
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
void solve() {
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int cnt1 = 0, cnt2=0;
    for (int i=0;i<n-1;i++) {
        if(s[i] == s[i+1]) {
            cnt1++;
        }
    }
    for (int i=0;i<m-1;i++) {
        if(t[i] == t[i+1]) {
            cnt2++;
        }
    }
    if(t.back() == s.back() && cnt1+cnt2!=0)
        cout<<"No\n";
    else if(cnt1+cnt2 > 1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
 
}
int main() {
    IOS
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}