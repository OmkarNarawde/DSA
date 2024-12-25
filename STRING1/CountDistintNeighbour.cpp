#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="omkarr";
    int count=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        //Base case
        if(n==1){
            break;
        }
        else if(n==2){
            count=1;
            break;
        }
        //check at 1st index 0 beacuse index(0-1) gives out off bound error
        else if(i==0){
            if(s[i]!=s[i+1]){
                count++;
            }
        }
        //check at last index (n-1) beacuse index(n) gives out off bound error
        else if(i==n-1){
            if(s[i]!=s[i-1]){
                count++;
            }
        }
        else if(s[i]!=s[i+1]&&s[i]!=s[i-1]){
            count++;
        }
    }
    cout<<count;
}