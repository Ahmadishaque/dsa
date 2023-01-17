#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return ;
    }


    print(n-1);
    cout<<n<<endl; 
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cin >> n;

    cout<<endl;
    print(n);

}

