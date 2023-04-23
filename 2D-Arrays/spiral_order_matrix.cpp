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

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    rs- row start
    re- row end
    cs- column start
    ce- column end
    */
    int rs=0 , cs =0 , re = n-1 , ce = m-1; 
    cout<<"Spiral Traversal is:"<<endl;
    while(rs<=re && cs<=ce){
        for(int i= cs;i<=ce;i++){
            cout<<arr[rs][i]<<" ";
        }
        rs+=1;
        for(int r = rs;r<=re;r++){
            cout<<arr[r][ce]<<" ";
        }
        ce-=1;

        for(int i = ce;i>=cs;i--){
            cout<<arr[re][i]<<" ";
        }
        re-=1;
        for(int r = re;r>=rs;r--){
            cout<<arr[r][cs]<<" ";
        }
        cs+=1;
    }
    return 0;
}