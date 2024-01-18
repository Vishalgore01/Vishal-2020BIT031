//binary search is used to check target element is present in the array or not

#include<iostream>
using namespace std;

int binary(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    while(s<=e){
        int  mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;  //if target is not in the array
}

int  main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the values of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter value of target:"<<endl;
    cin>>target;

    int index=binary(arr,n,target);
    if(index==-1){
        cout<<"Target element is not present in the given array"<<endl;
    }
    else{
        cout<<"Target element is present at "<<index<< "this index"<<endl;
    }

    return 0;

}