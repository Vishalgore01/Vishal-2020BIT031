#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter values in the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int target_sum;
    cout<<"Enter target sum value:"<<endl;
    cin>>target_sum;

    set<pair<int,int>>ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target_sum){
                ans.insert(make_pair(arr[i],arr[j]));
            }
        }
    }

    cout<<"Output will be: "<<endl;
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}