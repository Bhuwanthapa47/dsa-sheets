#include<bits/stdc++.h>
string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>st;
    
    for(int i=0;i<n;i++){
        st[a1[i]]++;
    }
    
    for(int j=0;j<m;j++){
        if(st[a2[j]]!=1){
            return"No";
        }
    }
    return "Yes";
}