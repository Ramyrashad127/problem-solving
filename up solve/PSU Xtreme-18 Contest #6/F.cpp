#include <bits/stdc++.h>
#define ll long long
#define vi vector
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
void solve() {
    int n;
    cin>>n;
    map<int,int>mp;
    vi<int>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
        mp[v[i]]++;
    }
    int cnt1=0, cnt2=mp.size();
    for(auto &e: mp) {
        if (e.second>1)
            cnt1+= e.second-1;
    }
    if(cnt1%2==0)
        cout<<cnt2<<"\n";
    else
        cout<<cnt2-1<<"\n";
 
}
int main() {
    IOS
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}