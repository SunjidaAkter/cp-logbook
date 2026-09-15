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
    if(s[0]=='u'){
        cnt++;
        s[0]='s';
    }
    if(s[n-1]=='u'){
        cnt++;
        s[n-1]='s';
    }
    ll tmp=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='u')tmp++;
        else{
            cnt+=(tmp/2);
            tmp=0;
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