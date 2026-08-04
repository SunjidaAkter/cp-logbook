#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    ll cnt = 1;
    for (ll i = 1; i < n; i++) {
        if (s[i] != s[i-1]) cnt++;
    }
    if (cnt == 1) {
        cout << 1 << nl;
        return;
    }
    bool ok2 = false;
    bool ok1 = false;
    for (ll i = 1; i <= n - 2; i++) {
        if (s[i] != s[i-1] && s[i] != s[i+1]) {
            if (s[i-1] == s[i+1]) {
                ok2 = true;
            } else {
                ok1 = true;
            }
        }
    }
    if (ok2) {
        cout << max((ll)1, cnt - 2) << nl;
    } else if (ok1) {
        cout << cnt - 1 << nl;
    } else {
        cout << cnt << nl;
    }
}
int main(){
    FAST;
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}