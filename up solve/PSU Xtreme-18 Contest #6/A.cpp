#include <bits/stdc++.h>
#define ll long long
#define vi vector
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
void solve() {
    int n,m;
    cin>>n>>m;
    map<int,int>exist;
    deque<int>d;
    vi<int>v(m+1), ans(n+1);
    for (int i=1;i<=n;i++)
        d.push_back(i);
    for (int i=0;i<m;i++) {
        cin>>v[i];
        if(exist[v[i]]) {
            continue;
        }
        if(d.back() <=n)
            ans[d.back()] = i+1;
        d.pop_back();
        d.push_front(v[i]);
        exist[v[i]]++;
    }

    for (int i=1;i<=n;i++) {
        if(!ans[i])
            cout<<-1<<" ";
        else
            cout<<ans[i]<<" ";
    }
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