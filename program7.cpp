#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter the given string"<<endl;
    cin>>str;
    int n=str.length();
    int maxlen=0;
    int len=0;
    
    for(int i=0;i<n;i++){
        map<char,int>mp;
        for(int j=i+1;j<n;j++){
            char ch=str[j];
            if(mp.find(ch)==mp.end()){
                mp[str[j]]++;
                len++;
            }
            else{
                i=j;
                maxlen=max(maxlen,len);
                len=0;
            }
        }
    }

    cout<<"Length of longest substring is "<<maxlen<<endl;

    return 0;
}