        
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

    vector<string>keywords={
        "int","long","float","double","bool","signed",
        "unsigned","char","string","void","auto","new",
        "switch","namespace","class","const","sizeof",
        "typedef","delete","nullptr","true","false",
        "or","do","xor","if","else","while","do while","break","continue"};

        vector<string>arithmetic_operators = {"+","-","*","/","%"};
        vector<string>relational_operator = {"==","!=","<",">","<=",">="};
        vector<string>logical_operator= {"&&","||","!"};
        vector<string>bitwise_operator={"&","|","^","~","<<",">>"};
        vector<string>assignment_operator={"=","+=","-=","*=","/=","%=","&=","!=","^=","<<=",">>="};
        vector<string>increment_decrement_operator={"++","--"};

    
   
void solve(){
    string s;
    while(getline(cin,s)){
        if(find(keywords.begin(),keywords.end(),s)!=end(keywords))
            cout<<"keywords"<<endl;
       else if(find(arithmetic_operators.begin(),arithmetic_operators.end(),s)!=end(arithmetic_operators))
            cout<<"arithmetic_operators"<<endl;

         else if(find(relational_operator.begin(),relational_operator.end(),s)!=end(relational_operator))
            cout<<"relational_operator"<<endl;

        else if(find(logical_operator.begin(),logical_operator.end(),s)!=end(logical_operator))
            cout<<"logical_operator"<<endl;

        else if(find(assignment_operator.begin(),assignment_operator.end(),s)!=end(assignment_operator))
            cout<<"assignment_operator"<<endl;

        else if(find(bitwise_operator.begin(),bitwise_operator.end(),s)!=end(bitwise_operator))
            cout<<"bitwise_operator"<<endl;

        else if(find(increment_decrement_operator.begin(),increment_decrement_operator.end(),s)!=end(increment_decrement_operator))
            cout<<"increment_decrement_operator"<<endl;

        else if(isalpha(s[0])||s[0]=='_'){
            int i=1;
            int flag = 1;
            while(i<s.size()){
                if(!isalnum(s[i])&&s[i]!='_'){
                    flag = 0;
                    break;
                }
                i++;
            }
            if(flag==0)cout<<"Invalid Lexeme"<<endl;
            else cout<<"Identifire"<<endl;
        }
        else if(isdigit(s[0])){
            int flag = 1;
            int i = 1;
           int doted_index = -1;
           int doted_count = 0;
            while(i<s.size()){
                if(!isdigit(s[i])&&s[i]!='.'){
                    flag = 0;
                    break;
                }
                else if(s[i]=='.'){
                    doted_count++;
                    doted_index=i;
                }
                i++;
            }
            if(doted_count>1||flag==0){
                cout<<"Invalid Lexeme"<<endl;
            }
            else if(doted_count==0&&doted_index==-1){
                if(s.size()<=4)cout<<"Integer"<<endl;
                else cout<<"Long Integer"<<endl;
            }
            else if(doted_count==1){
                int fraction = s.substr(doted_index+1).size();
                if(fraction<=2)cout<<"float"<<endl;
                else cout<<"double"<<endl;
            }
            else cout<<"Invalid Lexeme"<<endl;

        }
        else cout<<"Invalid Lexeme"<<endl;
    }
}

int main() {
  fast;
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  solve();
  return 0;
}
