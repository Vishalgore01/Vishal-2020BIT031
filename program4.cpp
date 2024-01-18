#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter value of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<vector<int>>ans;

    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=i+1;j<n;j++){
            temp.push_back(arr[i]);
        }
        ans.push_back(temp);
    }

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}