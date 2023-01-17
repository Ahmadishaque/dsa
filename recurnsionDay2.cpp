#include <iostream>
using namespace std;

    bool isSorted(int arr[], int size){
        if((size==0) || (size==1)){
            return true;
        }

        if(arr[0]>arr[1]){
            return false;
        }
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
   void sayDigit(int n, string arr[]){
        if(n==0){
            return ;
        }

        int digit = n%10;
        n=n/10;

        sayDigit(n, arr);
        cout<<arr[digit]<<" ";
   }

   int main(){
        int n;
        cin>> n;

        string arr[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

        sayDigit(n, arr);

   }