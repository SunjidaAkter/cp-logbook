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
    string s1,s2;cin>>s1>>s2;
    ll cnt=0;
    if(n>=m){
        if(s1.find(s2) != std::string::npos){cout<<0<<nl;return;}
        else {
            s1+=s1;
            if(s1.find(s2) != std::string::npos){cout<<1<<nl;return;}
            else {cout<<-1<<nl;return;}
        }
    }
    while(n<=2*m&&s1.find(s2) == std::string::npos){
        // cout<<s1<<" ";
        s1+=s1;
        cnt++;
        n=s1.size();
    }
    if(s1.find(s2) != std::string::npos){
        cout<<cnt<<nl;
    }else cout<<-1<<nl;
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