#include <bits/stdc++.h>
#define ll long long
#define vi vector
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    for (int i=0, j=s.size()-1;i<j;i++,j--) {
        if(s[i] == s[j])
            break;
        cnt++;
    }
    cout<<s.size() - cnt*2<<"\n";
 
}
int main() {
    IOS
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}