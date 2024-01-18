#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string str;
    cout<<"Enter the given text: "<<endl;
    cin>>str;

    int n=str.length();

    unordered_map<string,int>mp;
    string temp="";
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            mp[temp]++;
            temp="";
        }
        else{
            temp+=str[i];
        }
    }

    mp[temp]++;

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}


