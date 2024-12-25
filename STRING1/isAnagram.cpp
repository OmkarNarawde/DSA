#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1="physicswallah";
    string s2="wallahphysics";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"Anagram.";
    }
    else
        cout<<"Not Anagram.";
    
}