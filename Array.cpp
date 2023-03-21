#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define f(t)  int t; cin>>t; while(t--)

void c_p_c(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main(){
    c_p_c();
    int arr[3][4] = {
            {1,2,3,4},
            {5,6},
            {7,8,9}
        };
        cout<< sizeof(arr)/sizeof(arr[0][0]);
        for (int row = 0;row<(sizeof(arr)/sizeof(arr[0][0]));row++){
            for (int col = 0;col<(sizeof(arr[row])/sizeof(arr[0][0]));col++){
                cout<<arr[row][col];
            }
            cout<<"\n";
        };
    return 0;
}