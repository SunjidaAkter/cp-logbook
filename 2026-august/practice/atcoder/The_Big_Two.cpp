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
    ll n,m;cin>>n>>m;
    vector<pii>match(m);
    for(auto &x:match){
        cin>>x.first>>x.second;
    }
    set<pii>jor;
    vector<ll>fixed={match[0].first,match[0].second};
    for(ll f:fixed){
        bool first_uncovered=true;
        vector<ll>possible;
        for(ll i=1;i<m;i++){
            if(match[i].first==f || match[i].second==f)continue;
            if(first_uncovered){
                possible.push_back(match[i].first);
                possible.push_back(match[i].second);
                first_uncovered=false;
            }else{
                vector<ll>nxt;
                for(ll x:possible){
                    if(x==match[i].first || x==match[i].second)nxt.push_back(x);
                }
                possible=nxt;
                if(nxt.empty())break;
            }
        }
        if(first_uncovered){
            for(ll i=1;i<=n;i++){
                if(i==f)continue;
                possible.push_back(i);
            }
        }else if(possible.empty())continue;
        for(ll x:possible){
            jor.insert({min(f,x),max(f,x)});
        }
    }
    // if(!found)cout<<2*n-3<<nl;
    cout<<jor.size()<<nl;
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