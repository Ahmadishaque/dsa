#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    int n;
    cin>> n;
    for(int i =0; i<n; i++){
        vector<int> a;
        for(int j=0; j<3; j++){
            int x = rand()%1000;
            a.push_back(x);
        }
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    int maxy = v[n-1][1];
    int maxz = v[n-1][2];

    vector<vector<int>> x;
    vector<int> t;
    t.push_back(v[n-1][0]);
    t.push_back(v[n-1][1]);
    t.push_back(v[n-1][2]);

    x.push_back(t);

    for(int i=n-1; i>0; i--){
        if(maxy < v[i-1][1]){
            maxy = v[i-i][1];
            if(maxz < v[i-1][2]){
                maxz = v[i-1][2];
            }
            vector<int>y;
            for(int j=0; j<3; j++){
                y.push_back(v[i-1][j]);
            }
            x.push_back(y);            
        }
        else if(maxz < v[i-1][2]){
            maxz = v[i-i][2];
            if(maxy < v[i-1][1]){
                maxy = v[i-1][1];
            }
            vector<int>y;
            for(int j=0; j<3; j++){
                y.push_back(v[i-1][j]);
            }
            x.push_back(y);
        }
    }
    for(auto maxima : x){
        cout<< maxima[0]<<" "<<maxima[1]<<" "<<maxima[2]<<endl;
    }
}

