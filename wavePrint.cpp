#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[3][4];

    cout<<"Enter the array elements column wise"<<endl;

    for(int col=0; col<4; col++){
        for(int row=0;  row<3; row++){
           cin>> arr[row][col];
        }
    }

    
    for(int col=0; col<4; col++){
        if ((col==0)||(col%2==0)){
            for(int row=0;  row<3; row++){
                cout<< arr[row][col]<<" ";
            }
        }
        else{
            for(int row=2;  row>=0 ; row--){
                cout<< arr[row][col]<<" ";
            }
        }
        cout<<endl;
    }
}