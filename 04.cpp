        
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

void solve()
{
   
    string input;
    getline(cin,input);
    bool valid = true;
    if(tolower(input[0])>='i'&&tolower(input[0])<='n'){
        for(int i=0;i<input.size();i++){
            if(!isalnum(input[i])){
                valid = false;
                break;
            }
        }
        cout<<input<<" : "<<"Integer variable"<<endl;
        return;
    }
    else if(input[0]>='1'&&input[0]<='9'){
        for(int i=0;i<input.size();i++){
        if(!isdigit(input[i])){
            valid=false;
            break;
        }
    }
    }
    else valid = false;

    if(valid){
        if(input.size()<5)cout<<input<<" : Short integer"<<endl;
        else cout<<input<<" : Long integer"<<endl;
    }
    else{
        cout<<input<<" : Invalid Input of Undefined"<<endl;
    }
 
}

int main(){
 freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
   cin>>t;
  while(t--){
        solve();
    }
}

/*
input : 
int
jnt
null
flag
2
32
345
04
4567
012334
12345
t5y


output: 
int : Integer variable
jnt : Integer variable
null : Integer variable
flag : Invalid Input of Undefined
2 : Short integer
32 : Short integer
345 : Short integer
04 : Invalid Input of Undefined
4567 : Short integer
012334 : Invalid Input of Undefined
12345 : Long integer

*/
