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
        // cout<<"Total worlds : "<<0<<endl;
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

   // cout<<"Total worlds : "<<cnt<<endl;


  int letters = 0;
  int digit = 0;
  int other = 0;
  set<char>l,d,o;
  string ltr="";
  for(int i=0;i<s.size();i++){
    if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            letters++;
            l.insert(s[i]);
            ltr+=s[i];
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


  set<char>v,c;
int vowel = 0,consonant = 0;
        transform(ltr.begin(),ltr.end(),ltr.begin(),::tolower);
        for(int i=0;i<ltr.size();i++){
            if(ltr[i]=='a'||ltr[i]=='e'||ltr[i]=='i'||ltr[i]=='o'||ltr[i]=='u')
               {
                vowel++;
                v.insert(ltr[i]);
               }
            else {
                consonant++;
                c.insert(ltr[i]);
            }
        }
string vwl="";
string cnsnt="";
        for(int i=0;i<s.size();i++){
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                    while(s[i]!=' '){
                        vwl+=s[i];
                        i++;
                    }
                    vwl+=" ";
                }
                else  if(true){
                    while(s[i]!=' '){
                        cnsnt+=s[i];
                        i++;
                        if(i>=s.size())break;
                    }
                    cnsnt+=" ";

                }
            }

        cout<<"vowels :"<<vowel<<endl;
        cout<<"consonants : "<<consonant<<endl;
        cout<<"vowels are in the string: "<<endl;
        for(auto it: v)cout<<it<<" ";
        cout<<"\n";
        cout<<"Consonants are in the string: "<<endl;
         for(auto it: c)cout<<it<<" ";
            cout<<"\n";
          cout<<vwl<<endl;
            cout<<cnsnt<<endl;
}


