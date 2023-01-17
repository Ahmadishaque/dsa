#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s="Id am an student";
    int start =0; 
    for(int i=0; i<=s.length(); i++){
        if(s[i]==' ' || s[i]=='\0'){
            int end = i-1;
            while (start<end){
                swap(s[start++], s[end--]);
            }
            start = i+1;
        }        
    }
    cout<<s;
}
