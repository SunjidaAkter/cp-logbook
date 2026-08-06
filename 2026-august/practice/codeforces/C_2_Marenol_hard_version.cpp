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
        cout<<0<<nl;return;
    }
    ll cnt_one1=0,cnt_zero1=0,cnt_one2=0,cnt_zero2=0;
    for(ll i=0;i<n;i++){
        if(s1[i]=='1') cnt_one1++;
    }
    for(ll i=0;i<n;i++){
        if(s2[i]=='1') cnt_one2++;
    }
    if(cnt_one1!=cnt_one2){
        cout<<-1<<nl;return;
    }
    ll cnt=0;
    if(cnt_one1<n-cnt_one1){
        vector<ll>one_even_pos1,one_odd_pos1,one_even_pos2,one_odd_pos2;
        for(ll i=0;i<n;i++){
            if(s1[i]=='1'){
                if(i%2==0) one_odd_pos1.push_back(i+1);
                else one_even_pos1.push_back(i+1);
            }
        }
        for(ll i=0;i<n;i++){
            if(s2[i]=='1'){
                if(i%2==0) one_odd_pos2.push_back(i+1);
                else one_even_pos2.push_back(i+1);
            }        
        }
        if(one_even_pos1.size()==one_even_pos2.size() && one_odd_pos1.size()==one_odd_pos2.size()){
            for(ll i=0;i<one_even_pos1.size();i++){
                cnt+=(abs(one_even_pos1[i]-one_even_pos2[i])/2);
            }
            for(ll i=0;i<one_odd_pos1.size();i++){
                cnt+=(abs(one_odd_pos1[i]-one_odd_pos2[i])/2);
            }
            cout<<cnt<<nl;
        }else{
            cout<<-1<<nl;
        }
    }else{
        vector<ll>one_even_pos1,one_odd_pos1,one_even_pos2,one_odd_pos2;
        for(ll i=0;i<n;i++){
            if(s1[i]=='0'){
                if(i%2==0) one_odd_pos1.push_back(i+1);
                else one_even_pos1.push_back(i+1);
            }
        }
        for(ll i=0;i<n;i++){
            if(s2[i]=='0'){
                if(i%2==0) one_odd_pos2.push_back(i+1);
                else one_even_pos2.push_back(i+1);
            }        
        }
        if(one_even_pos1.size()==one_even_pos2.size() && one_odd_pos1.size()==one_odd_pos2.size()){
            for(ll i=0;i<one_even_pos1.size();i++){
                cnt+=(abs(one_even_pos1[i]-one_even_pos2[i])/2);
            }
            for(ll i=0;i<one_odd_pos1.size();i++){
                cnt+=(abs(one_odd_pos1[i]-one_odd_pos2[i])/2);
            }
            cout<<cnt<<nl;
        }else{
            cout<<-1<<nl;
        }

    }    
    
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