#include <iostream>
using namespace std;


int maxRowSum(int num[], int n){
    int maxi=-1;
    int maxIndex=-1;
    int i=0;
    for(; i<n; i++){
        if (num[i]>maxi){
            maxi=num[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}

void sum(int num[][4], int n , int m){
    int arr1[n];
    for(int i=0; i<n; i++){
        int sum=0; 
        for(int j=0; j<m; j++){
            sum=sum+num[i][j];
        }
        arr1[i]=sum;
    }

    cout<<"The sum of rows are"<<endl;
    for(int row=0;  row<n; row++){
        cout<< arr1[row]<<endl;
    }

    int ansIndex = maxRowSum(arr1, n);
    cout<<"The maximum sum of rows is at row "<<ansIndex <<endl;
}

int main(){
    int num[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>> num[i][j];
        }
    }

    sum(num, 3, 4);
}