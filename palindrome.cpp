#include <iostream>
#include <vector>
using namespace std;

int getLength(char a[]){
    int count = 0;
    for(int i=0; a[i]!='\0'; i++){
        count++;
    }
    return count;
}

bool checkPalindrome(char a[], int n){
    int s=0, e=n-1;
    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
        s++;
        e--;
        }
    }
    return 1;
}

int main(){
    char alpha[30];
    cin>> alpha;
    int len=getLength(alpha);
    cout<< "palindrome or not? "<<endl;
    cout<<checkPalindrome(alpha, len);
}