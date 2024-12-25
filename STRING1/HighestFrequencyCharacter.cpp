//Problem Statement:given a string consist of lower case english alphabets.Print character that occurs most of the times.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string str="leetcode";
    vector<int>arr(26,0); //Take fix size of array 
    for(int i=0;i<26;i++){//traverse the array and update the value
        char ch=str[i];
        int ascii=int(ch);
        arr[ascii-97]++;//calculate the value of char for update at the indexing of aarray 
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]) max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max) 
        cout<<arr[i]<<"-"<<char(i+97);
    }
}