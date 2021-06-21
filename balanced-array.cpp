#include<bits/stdc++.h>
using namespace std;

// funtion
int index(int arr[], int n){
    int sum[n];
    int temp=0;
    int ans=0;

    //strong the running sum of array into new array
    for(int i=0;i<n;i++){
        temp+=arr[i];
        sum[i]=temp;
    }
    
    //loop to check the conditon
    for(int i=1;i<n-1;i++){
        if(sum[i-1]==(sum[i+1]-sum[i])){
            ans=i;
            break;
        }
    }

    //returning the answer;
    return ans;
}

// main function

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    //taking size of array
    cin>>n;

    //taking array input
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // calling the function
    cout<<"The index: "<<index(arr,n);
    
}