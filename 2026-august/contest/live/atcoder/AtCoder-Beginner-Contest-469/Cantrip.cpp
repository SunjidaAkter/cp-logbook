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
    ll cnt=0;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        if(s[i]=='o')cnt++;
        else{
            cnt++;
            v.push_back(cnt);
        }
    }
    if(s[n-1]=='o')v.push_back(cnt);
    ll sz=v.size();
    for(ll i=0;i<sz;i++){
        cout<<v[i]<<nl;
    }
    for(ll i=0;i<n-sz;i++){
        cout<<v[sz-1]<<nl;
    }
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}