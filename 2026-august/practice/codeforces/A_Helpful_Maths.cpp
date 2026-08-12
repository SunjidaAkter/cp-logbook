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
    vector<ll>v;
    for(ll i=0;i<s.size();i++){
        if(s[i]!='+')v.push_back(s[i]-'0');
    }
    sort(all(v));
    for(ll i=0;i<v.size()-1;i++){
        cout<<v[i]<<'+';
    }
    cout<<v[v.size()-1]<<nl;
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