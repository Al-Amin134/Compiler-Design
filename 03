        
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
int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 string input,dept_name;
 getline(cin,input);
 // cout<<input<<endl;
 int i=0;
 while(input[i]!='-'){
    dept_name+=input[i];
    i++;
 }


 string code = input.substr(i+1);
 map<string,string>dept;
 dept["CSE"]="Computer Science & Engineering";
 dept["ICE"]="Information & Communication Engineering";

    map<char,string>year;
    year['1']="1st";
    year['2']="2nd";
    year['3']="3rd";
    year['4']="4th";

    map<char,string>semester;
    semester['1']="1st";
    semester['2']="2nd";
    semester['3']="3rd";
    semester['4']="4th";

     map<char,string>subject;
    subject['1']="Software Engineering";
    subject['2']="Database system design";
    subject['3']="Web Engineering";
    subject['4']="Compiler Design";

    map<char,string>course;
    course['1']="Theory";
    course['2']="LAB";

    cout<<dept[dept_name]<<", "<<year[code[0]]<<" year, "<<semester[code[1]]<<" semester, "<<subject[code[2]]<<", "<<course[code[3]]<<"."<<endl;

}


/* inputs

CSE-3141

outputs

Computer Science & Engineering, 3rd year, 1st semester, Compiler Design, Theory.
*/
