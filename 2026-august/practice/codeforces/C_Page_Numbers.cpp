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
    string tmp="";
    set<ll>st;
    for(ll i=0;i<s.size();i++){
        if(s[i]==','){
            ll x=stol(tmp);
            st.insert(x);
            tmp="";
        }else tmp+=s[i];
    }
    ll x=stol(tmp);
    st.insert(x);
    vector<ll> v(st.begin(), st.end());
    bool ok=0;
    if(v.size()==1){
        cout<<v[0];
        return;
    }
    if(v.size()>=2&&v[1]-v[0]!=1){
        cout<<v[0]<<",";
    }
    for(ll i=1;i<v.size();i++){
        ll start=v[i-1];
        while(i<v.size()&&v[i]-v[i-1]==1){
            i++;
            ok=1;
        }
        if(ok)i--;
        ok=0;
        // cout<<i<<"chk";
        if((start==v[i-1]&&v[i]-start==1)||start!=v[i-1])cout<<start<<'-'<<v[i];
        else if(i+1<v.size() && v[i+1]-v[i]==1) continue;
        else cout<<v[i];
        if(i+1<v.size())cout<<",";
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