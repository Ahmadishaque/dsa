#include <iostream>
using namespace std;


bool linearSearch(int *arr, int size, int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    linearSearch(arr+1, size-1, key);
}

int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key =2;
    cout<< "Key present ? "<< linearSearch(arr, 5, 2);
    return 0;
}