#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxSum(vector<int>&arr){
    int sum=0;
    int maxi =INT_MIN;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        maxi = max(sum,maxi);

        if(sum<0){
            sum =0;
        }
    }
    return maxi;
}
int main(){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    int sum=0;
    int maxi =INT_MIN;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        maxi = max(sum,maxi); 

        if(sum<0){
            sum =0;
        }
    }
    cout<<maxi;
    //cout<<maxSum(arr);
return 0;
}
