
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
set<string>pn = {"Sagor","Selim","Salma","Nipu"};
set<string>p = {"he","she","I","We","You","They"};
set<string>n = {"book","cow","dog","home","grass","rice","mango"};
set<string>v = {"read","eat","take","run","write"};


int main()
{
    freopen("9.txt","r",stdin);

    string s;
    while(getline(cin,s))
    {
        bool isvalid = true;
        string word="";
        vector<string>words;
        for(char ch:s)
        {
            if(ch!=' ')
            {
                word+=ch;
            }
            else
            {

                words.push_back(word);

                word = "";
            }
        }

        if((find(pn.begin(),pn.end(),words[0])==pn.end())&&(find(p.begin(),p.end(),words[0])==p.end()))
            isvalid=false;
        else if(find(v.begin(),v.end(),words[1])==v.end())
            isvalid=false;

        else if(words.size()==3)
        {
            if(find(n.begin(),n.end(),words[2])==n.end())
                isvalid = false;
        }
        if(isvalid)cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;

    }


}
