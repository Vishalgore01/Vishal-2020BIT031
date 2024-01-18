#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter string:"<<endl;
    cin>>str;

    int s=0;
    int l=str.length()-1;

    while(s<=l){
        swap(str[s],str[l]);
        s++;
        l--;
    }

    cout<<"Reversed string is "<<str<<endl;
    return 0;
}