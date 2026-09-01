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
    if(n!=5){
        no;return;
    }
    string ans="Timur";
    map<char,ll>mp1;
    map<char,ll>mp2;
    for(ll i=0;i<n;i++){
        mp1[ans[i]]++;
        mp2[s[i]]++;
    }
    if(mp1.size()!=mp2.size()){
        no;return;
    }
    vector<pair<char,ll>>v1;
    vector<pair<char,ll>>v2;
    for(auto x:mp1){
        v1.push_back({x.first,x.second});
    }
    for(auto x:mp2){
        v2.push_back({x.first,x.second});
    }
    if(v1==v2)yes;
    else no;
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