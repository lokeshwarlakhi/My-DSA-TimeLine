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
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;cin>>x;bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"Element Found";
    }
    else{
        cout<<"Not Found!!";
    }
    return 0;
}