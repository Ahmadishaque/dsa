#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int arr[26];
    string s="";
    for(int i=0; i<s.length(); i++){
        int number=0;
        char ch=s[i];
        if(ch >='a' && ch <='z'){
            number = ch-'a';
        }
        if(ch >='A' && ch <= 'Z'){
            number = ch-'A';
        }
        arr[number]++;
    }

    int maxi=-1, ans=-1;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            ans=i;
        }
    }
    return 'a'+ans;
}