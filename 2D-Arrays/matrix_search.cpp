// Catch: here the cols will be sorted , so will be the rows. 
// brute force approach will be use linear search -> O(nm)
// observations according to the catch
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
    int t;cin>>t;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int r = 0,c=m-1;
    bool fg = false;
    while(r<n && c>=0){
        if(a[r][c]==t){
            fg = true;
            break;
            }
        else if(a[r][c]>t){
            c--;
        }
        else
            r+=1;
        
    }
    if(fg) cout<<"element found";
    else cout<<" Does not exist";
    return 0;
}