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
    string ans="";
    for(ll i=0;i<n;i++){
        if(i%2)ans+='1';
        else ans+='0';
    }
    map<ll,set<ll>>mp;
    for(ll i=0;i<n;i++){
        mp[s[i]].insert(ans[i]);
    }
    for(auto &x:mp){
        if(x.second.size()>1){no;return;}
    }
    yes;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}