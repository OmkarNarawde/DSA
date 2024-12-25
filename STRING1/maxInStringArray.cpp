//given n strings consisting of digits from 0 to 9. return the index of string which has maximum value.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str[]={"0123","0023","00234","0012345"};
    int max=stoi(str[0]);
    string maxStr;
    for(int i=0;i<4;i++){
        int num=stoi(str[i]);
        if(max<num){
            max=num;
            maxStr=str[i];
        }
    }
cout<<maxStr<<endl;
cout<<max;
}