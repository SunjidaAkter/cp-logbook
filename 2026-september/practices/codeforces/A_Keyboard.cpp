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
    char c;cin>>c;
    string s;cin>>s;
    string str="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(ll i=0;i<s.size();i++){
        ll pos=str.find(s[i]);
        if(c=='R')pos--;
        else pos++;
        cout<<str[pos];
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