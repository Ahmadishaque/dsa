#include <iostream>
#include <vector>
using namespace std;

void sum(int num[][4], int n , int m){
    int arr1[n];
    for(int i=0; i<n; i++){
        int sum=0; 
        for(int j=0; j<m; j++){
            sum=sum+num[i][j];
        }
        arr1[i]=sum;
    }
    for(int row=0;  row<n; row++){
        cout<< arr1[row]<<endl;
    }

}
int main(){
    int arr[3][4];

    cout<<"Enter the array elements row wise"<<endl;

    for(int row=0; row<3; row++){
        for(int col=0;  col<4; col++){
           cin>> arr[row][col];
        }
    }
    for(int row=0; row<3; row++){
        for(int col=0;  col<4; col++){
            cout<< arr[row][col]<<" ";
        }
        cout<<endl; 
    }

    sum(arr, 3, 4);



}
