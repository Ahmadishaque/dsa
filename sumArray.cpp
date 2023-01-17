#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<int> sum(vector<int> nums1, int n, vector<int> nums2, int m){
    int sum=0, carry=0, temp=0;
    for (auto i =n-1, j=m-1; i>=0, j>=0; i--, j--){
        temp=nums1[i]+nums2[j];
        carry = temp/10;
        temp=temp%10;
        sum =  sum+temp+pow(10, n-i-1);
    }
    // if(i<j){

    // }
}