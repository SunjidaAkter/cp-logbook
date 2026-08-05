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
    ll cnt=1,ok=0;
    for(ll i=1;i<s.size();i++){
        if(s[i]!=s[i-1])cnt++; 
    }
    if(s.size()==3&&s[0]==s[2]){cout<<1<<nl;return;}
    if(s.size()==3&&s[0]!=s[2]){cout<<2<<nl;return;}
    for(ll i=1;i<s.size()-1;i++){
        if(s[i+1]==s[i-1]&&s[i]!=s[i-1]&&s[i+1]!=s[i])ok=1; 
    }
    if(ok)cnt-=2;
    else{
        for(ll i=1;i<s.size()-1;i++){
            if(s[i]!=s[i-1]&&s[i]!=s[i+1]&&s[i-1]!=s[i+1]){cnt--;break;}
        }
    }
    cout<<cnt<<nl;
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