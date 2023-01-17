#include <iostream>
#include <queue>
using namespace std;

int solve(vector<int>arr, int k){
    deque<int> maxi;
    deque<int> mini;
    
    for(int i=0; i<k; i++){

        while(!maxi.empty() && arr[maxi.front()]<arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.front()]>arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    
    int ans =0;

    ans += arr[maxi.front()]+arr[mini.front()];

    for(int i=k; i<arr.size(); i++){

        while(!maxi.empty() && i-maxi.front()>=k){
            maxi.pop_front();
        }
        while(!mini.empty() && i-mini.front()>=k){
            mini.pop_front();
        }
        while(!maxi.empty() && arr[maxi.front()]<arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.front()]>arr[i]){
            mini.pop_back();
         }
        maxi.push_back(i);
        mini.push_back(i);
        ans += arr[maxi.front()]+arr[mini.front()];
    }

    return ans;
}
//     priority_queue<int>pmax;
//     priority_queue<int,vector<int>,greater<int>>pqmin;
//    for(int i=0;i<k;i++){
//         pmax.push(arr[i]);
//             pqmin.push(arr[i]);
//    }
//    int mini,maxi;
//    maxi=pmax.top();
//    if(maxi==arr[0])
//    pmax.pop();
//    mini=pqmin.top();
//    if(mini==arr[0])
//    pqmin.pop();
//    int sum=0;
//    sum+=mini+maxi;
//    cout<<mini<<" "<<maxi<<" "<<endl;
//     for(int i=k;i<arr.size();i++){
//          pmax.push(arr[i]);
//         pqmin.push(arr[i]);
//         maxi=pmax.top();
//         if(maxi==arr[i-k+1])
//         pmax.pop();
//         mini=pqmin.top();
//         if(mini==arr[i-k+1])
//         pqmin.pop();
//         sum+=mini+maxi;
//         cout<<mini<<" "<<maxi<<" "<<endl;

//     }
//     return sum;
// }

int main()
{
    vector<int>arr;
    int v[]={2, 5, -1, 7, -3, -1, -2};
    for(int i=0;i<7;i++){
        arr.push_back(v[i]);
    }
    int k = 4;
    cout<< solve(arr, k)<<endl;
    return 0;
}