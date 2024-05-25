        
/*
 بسم الله الرحمن الرحيم
 
 ♥♥♥♥♥  ♥♥           ♥♥♥♥♥  ♥♥♥    ♥♥♥ ♥♥ ♥♥♥    ♥♥ 
♥♥   ♥♥ ♥♥          ♥♥   ♥♥ ♥♥♥♥  ♥♥♥♥ ♥♥ ♥♥♥♥   ♥♥ 
♥♥♥♥♥♥♥ ♥♥   ♥♥♥♥   ♥♥♥♥♥♥♥ ♥♥ ♥♥♥♥ ♥♥ ♥♥ ♥♥ ♥♥  ♥♥ 
♥♥   ♥♥ ♥♥          ♥♥   ♥♥ ♥♥  ♥♥  ♥♥ ♥♥ ♥♥  ♥♥ ♥♥ 
♥♥   ♥♥ ♥♥♥♥♥♥♥     ♥♥   ♥♥ ♥♥      ♥♥ ♥♥ ♥♥   ♥♥♥♥ 
*/   
#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;

void solve(){
    string s;
    getline(cin,s);
   // cout<<s<<endl;
    int flag = 1;
    if(s[0]=='c'&&s[1]=='h'&&s[2]=='_'&&isalnum(s[3])){
        int i=4;
        while(i<s.size()){
            if(!isalnum(s[i])){
                flag = 0;
                break;
            }
            i++;
        }

     if(flag==0)cout<<"Invalid Input or Undefined"<<endl;
    else cout<<"Character Variable"<<endl;
    }

    else if(s[0]=='b'&&s[1]=='n'&&s[2]=='_'&&isalnum(s[3])){
        int i=4;
        while(i<s.size()){
            if(!isalnum(s[i])){
                flag = 0;
                break;
            }
            i++;
        }

     if(flag==0)cout<<"Invalid Input or Undefined"<<endl;
    else cout<<"Binary Variable"<<endl;
    }

    else if(s[0]=='0'&&(s[1]=='0'||s[1])=='1'){
        int i = 2;
        while(i<=s.size()){
            if(s[i]!='0'||s[i]!='1'){
                flag = 0;
                break;
            }
        }
        if(flag==1)cout<<"Binary Number"<<endl;
        else cout<<"Invalid Input or Undefined"<<endl;
    }
    else {
        cout<<"Invalid Input or Undefined"<<endl;        
    }
    
}
int main() {
  fast;
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  //TC
  solve();
  return 0;
}
