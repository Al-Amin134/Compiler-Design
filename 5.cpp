        
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

    char m = tolower(s[0]);
    if((m>='a'&&m<='h')||(m>='o'&&m<='z')){
        int i=1;
        while(i<s.size()){
            if(!isalnum(s[i])){
                flag = 0;
                break;
            }
            i++;
        }

     if(flag==0)cout<<"Invalid Input or Undefined"<<endl;
    else cout<<"Float Variable"<<endl;
    }
    else if(isdigit(s[0])){
        int i=1;
        int dot_positon=-1, dot_count = 0;
        while(i<s.size()){
            if(s[i]=='.'){
                dot_positon = i;
                dot_count++;
            }
            if(!isdigit(s[i])&&s[i]!='.'){
                flag = 0;
                break;
            }
            i++;
        }
        if(dot_positon!=-1&&dot_count==1&&flag==1){
            ll fraction = s.substr(dot_positon+1).size();
            if(fraction<=2)cout<<"Float Number"<<endl;
            else
                cout<<"Double Number"<<endl;
        }
        else {
            cout<<"Invalid Input or Undefined"<<endl;
        }
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
