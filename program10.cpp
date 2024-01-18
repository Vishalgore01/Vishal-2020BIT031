#include<iostream>
using namespace std;

//Recursive Function to get factorial of an integer

int fact(int n){
    //base case
    if(n==0){
        return 1;
    }

    int ans=n*fact(n-1);    //recursive call
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int ans=fact(n);
    cout<<"Factorial of given number is: "<<ans<<endl;

    return 0;

}