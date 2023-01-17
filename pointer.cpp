#include <iostream>
using namespace std;

// int main(){
// int num[]={1,23,4,5,6,7,8,9,0};
// cout<<sizeof(&num)<<endl;
// int i =5;
// int *ptr =&i;
// cout<<sizeof(ptr);

    

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    int **p2= new int*;

    for(int i =0; i<n; i++){
        p2[i]=new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            cin>> p2[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<p2[i][j]<<" ";
        }
        cout<< endl;
    }
    return 0;
}