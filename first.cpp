#include<bits/stdc++.h>
using namespace std;
int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin,s);
    int cnt=1;
    if(s==""){
         cout<<"Total worlds : "<<0<<endl;
        return 0;
    }
    int init = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            init = i;
            break;
        }
    }
    for(int i=init;i<s.size();i++){
        if((s[i]==' '&&s[i+1]!=' '))
            cnt++;
    }

    cout<<"Total worlds : "<<cnt<<endl;


  int letters = 0;
  int digit = 0;
  int other = 0;
  set<char>l,d,o;
  for(int i=0;i<s.size();i++){
    if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            letters++;
            l.insert(s[i]);
        }
    else if(s[i]>='0'&&s[i]<='9')
        {
            digit++;
           d.insert(s[i]);
        }
    else if(s[i]!=' ') {
        other++;
        o.insert(s[i]);
    }
  }

   cout<<"Total letters : "<<letters<<endl;
    cout<<"Total Digits : "<<digit<<endl;
    cout<<"Other characters :"<<other<<endl;

    cout<<"\n\n Seperate letters are : "<<endl;
    for(auto i: l)cout<<i<<" ";
    cout<<"\n Seperate digits are : "<<endl;
    for(auto i: d)cout<<i<<" ";
        cout<<"\n";

    cout<<" Seperate other characters are : "<<endl;
    for(auto i: o)cout<<i<<" ";
}


