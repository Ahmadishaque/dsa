#include <iostream>
#include <vector>
using namespace std;

int getlength(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++ ){
        count++;
    }
    return count;
}
void revString (vector<char> alpha){
    int start =0, end = alpha.size()-1;
    while(start<end){
        swap(alpha[start], alpha[end]);
    }
}

int main(){
    char name[20];
    cout<< "Enter your name"<<endl;
    cin>> name;

    cout<<"your name is: ";
    cout<<name<<endl;
    cout<<"The length of your name is: "<<getlength(name) <<endl;


    //revString(name);
}
