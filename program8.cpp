#include<iostream>
using namespace std;

bool checkPalin(string str){
    int s=0;
    int e=str.length()-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter string value "<<endl;
    cin>>str;

    if(checkPalin(str)){
        cout<<"Given string is a palindrome"<<endl;
    }
    else{
        cout<<"Given string is not a palindrome"<<endl;
    }

    return 0;
}