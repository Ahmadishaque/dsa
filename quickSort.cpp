#include <iostream>
using namespace std;

int partition (int *arr, int s, int e){
    int pivot = arr[s];
    int count =0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int partitionIndex=s+count; 
    swap (arr[s], arr[partitionIndex]);
    int i=s, j=e;
    while(i<partitionIndex && j>partitionIndex){
        while(arr[i]<pivot){
            i++;
        }  
        while(arr[j]>pivot){
            j--;
        }
        if(i<partitionIndex && j>partitionIndex){
            swap(arr[i++], arr[j--] );
        }

    }
    return partitionIndex;
}

void quickSort(int *arr, int s, int e){
    if(s>=e){
        return ;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);
}



int main(){
    int arr[5]={2,4,1,6,9};
    int n=5;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}