#include<bits/stdc++.h>
using namespace std;
#define int long long 

main(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(2*(arr[0]+arr[1])<=arr[2]){
        cout<<arr[0]+arr[1];
    }
    else{
        cout<<(arr[0]+arr[1]+arr[2])/3;
    }
    
    
}