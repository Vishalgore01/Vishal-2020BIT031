#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the values of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }cout<<endl;

    return 0;
}