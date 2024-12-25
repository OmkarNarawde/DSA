#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str="my name is omkar  I am a software engineer at pune I love pune";
    stringstream ss(str);
    string temp;
    vector<string>s;
    while(ss>>temp){
        s.push_back(temp);
    }
    sort(s.begin(),s.end());
    int count=1;
    int maxcount=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else count=1;
        maxcount=max(maxcount,count);
    }
    count=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else count=1;
        if(maxcount==count){
            cout<<s[i]<<" - "<<count<<endl;
        }
    }
}
