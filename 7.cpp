        
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

bool iskeywords(string s){
    vector<string>keywords={
        "int","long","float","double","bool","signed",
        "unsigned","char","string","void","auto","new",
        "switch","namespace","class","const","sizeof",
        "typedef","delete","nullptr","true","false",
        "or","xor","if","else","while","do while","break","continue"};

        for(int i=0;i<keywords.size();i++){
            if(keywords[i].compare(s)==0){
                return true;
            }
        }
        return false;
}

bool isoperator(string s){
    vector<string>operators={"+","-","*","/","%",
    "|","||","&&","&","=","==","!",
    "!=",">","<",">=","-=","+=","*=",
    "/=","%=","&=","|=","^=","<<=",
    ">>=","++","--","?",":",",",".",
    "->","::"};

    for(int i=0;i<operators.size();i++){
            if(operators[i].compare(s)==0){
                return true;
            }
        }
        return false;
}

bool is_identifier(string s){
    if(isdigit(s[0])){
        return false;
    }
        for(char ch:s){
            if(ch!='_'&&!isalnum(ch)){
                return false;
            }
        }
        return true;
   }

   int c = 0;
   bool isconstant(string s){
    for(char ch:s){
        if(ch=='.')c++;
    }
    if(c>1)return false;
    for(char ch:s){
        if(ch!='.'&& !isdigit(ch))return false;
    }
    return true;
   }
   
void solve(){
    string s;
    getline(cin,s);
   if(iskeywords(s))cout<<s<<" is a keywords"<<endl;
   else if(isoperator(s))cout<<s<<" is an operator"<<endl;
   else if(iskeywords(s))cout<<s<<" is a keywords"<<endl;
   else if(isconstant(s))cout<<s<<" is a constant"<<endl;
   else cout<<"Ndone of them"<<endl;
   
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
