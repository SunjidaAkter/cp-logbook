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
    string s;cin>>s;
    ll n=s.size();
    ll cnt=0;
    for(ll i=0;i<n;i++)if(islower(s[i]))cnt++;
    if((n-cnt)<=cnt){
        for(ll i=0;i<n;i++)s[i]=tolower(s[i]);
    }else{
        for(ll i=0;i<n;i++)s[i]=toupper(s[i]);
    }
    cout<<s<<nl;
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