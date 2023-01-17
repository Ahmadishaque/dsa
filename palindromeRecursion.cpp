#include <iostream>
using namespace std;

bool check(string pal, int s, int e){
    if(s>e){
        return false;
    }
    if(pal[s]==pal[e]){
        s++;
        e--;
    }
    check(pal, s, e);
    return true;
}

int main(){
    string pal="aabbcbbaa";

    cout<<check(pal, 0, pal.length()-1 );
    return 0;
}