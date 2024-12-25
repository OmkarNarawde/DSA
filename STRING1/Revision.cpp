#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str="Hello welcome to hello worlds code now you start writing your code";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count=1;
    int mxcount=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count=1;
        mxcount=max(count,mxcount);
    } 
     int count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]){
            count++;
        }
        else count=1;
        if(count==mxcount){
            cout<<v[i]<<" - "<<count<<endl;
        }
    } 
}

