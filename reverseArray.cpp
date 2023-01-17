#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";  
    }
}

vector<int> reverse(vector<int> v){
    int s =0, e=v.size()-1;
    while(s<=e){
        swap(v[s++], v[e--]);
    }

    return v;
}

int main (){
    vector<int> v;

    v.push_back(11);
    v.push_back(3);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);

    vector<int> ans = reverse(v);

    //cout<<"the reverse array is" << endl;
    print(ans);
    return 0;
    
}