#include <iostream>
using namespace std;

int arraySum(int *arr, int size){
    if(size==0){
    return 0;
    }
    if(size==1){
        return arr[0];
    }
    int ans = arraySum(arr, 1)+arraySum(arr+1, size-1);
    return ans;
}

int main(){
    int n;
    cin>> n;

    int arr[]={2,3,42,8,1};
    cout <<"Te sum is "<<arraySum(arr, n);
}