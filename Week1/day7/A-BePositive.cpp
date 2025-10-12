#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int cntZero=0;
        int cntNeg=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cntZero++;
            }
            if(arr[i]<0){
                cntNeg++;
            }
        }

        int op=cntZero;
        if(cntNeg%2!=0){
            op+=2;
        }
        cout<<op<<endl;
    }
    return 0;
}