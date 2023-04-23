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
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a1[n1][n2];
    int a2[n2][n3];

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>a1[i][j];
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>a2[i][j];
        }
    }

    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j] += a1[i][k]*a2[k][j];
            }
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}