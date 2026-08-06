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
    string s1,s2;cin>>s1>>s2;
    if(s1==s2){
        yes;return;
    }
    ll one_even_pos1=0,one_odd_pos1=0,one_even_pos2=0,one_odd_pos2=0;
    for(ll i=0;i<n;i++){
        if(s1[i]=='1'){
            if(i%2==0) one_even_pos1++;
            else one_odd_pos1++;
        }
    }
    for(ll i=0;i<n;i++){
        if(s2[i]=='1'){
            if(i%2==0) one_even_pos2++;
            else one_odd_pos2++;
        }
    }
    if(one_even_pos1==one_even_pos2 && one_odd_pos1==one_odd_pos2){
        yes;return;
    }
    no;
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