#include <bits/stdc++.h>
#define ll long long
#define vi vector
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
void solve() {
    int n,m;
    cin>>n>>m;
    vi<int>v;
    int cnt = m;
    for (int i=m;i<=n;i++)
        v.push_back(i);
    for (int i=n-1;i>=m+1;i--)
        v.push_back(i);
    cout<<v.size()<<"\n";
    for (int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<"\n";
 
}
int main() {
    IOS
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}