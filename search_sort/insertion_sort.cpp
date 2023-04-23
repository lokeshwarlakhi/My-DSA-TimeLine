#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define f(t)  int t; cin>>t; while(t--)
#define ll    long long int

void c_p_c(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main(){
    c_p_c();
    int n;cin>>n; vector<int> arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }

    for(int i=1;i<n;i++){
        int curr = arr[i];
        int j = i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=curr;
    }


    for(int &i:arr){
        cout<<i<<" ";
    }
    return 0;
}