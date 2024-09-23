#include <bits/stdc++.h>
#define ll long long
#define vi vector
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
void solve() {
    int n;
    cin>>n;
    vi<ll>v(n);
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll q,x;
    cin>>q;
    while (q--) {
        cin>>x;
       auto idx = upper_bound(v.begin(),v.end(),x) - v.begin();
        if(idx == n) {
            cout<<n<<"\n";
        }
        else if(idx == 0)
            cout<<0<<"\n";
        else {
            cout<<idx<<"\n";
        }
    }
}
int main() {
    IOS
    int t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}