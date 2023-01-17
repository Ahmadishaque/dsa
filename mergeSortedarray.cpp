#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n){
    int i=0, j=0, k=0;
    vector<int> nums3;
    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            nums3[k]=nums1[i];
            i++;
        }
        else{
            nums3[k]=nums2[j];
            j++;
        }
        k++;
    }
    while(j<n){
        nums3[k]=nums2[j];
        j++;
        k++;
    }
    while(i<m){
        nums3[k]=nums1[i];
        i++;
        k++;
    }
    for (int k=0; k<nums3.size(); k++){
        nums1[k]=nums3[k];
    }
    
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";  
    }
}


int main (){
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(8);
    

    vector<int> v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(9);

    vector<int> ans = merge(v1, 4, v2, 3);

    //cout<<"the reverse array is" << endl;
    print(ans);
    return 0;
}