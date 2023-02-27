#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int countGoodStrings(int low, int high, int zero, int one) {
    vector<int> table(max(zero,one)+1,0);
    int mod=pow(10,9)+7;
    int res=0;
    table[min(zero,one)]+=1;
    table[max(zero,one)]+=1;
    for(int i=min(zero,one)+1;i<max(zero,one)+1;i++){
        if(i%min(zero,one)==0){
            table[i]+=1;
        }
    }
    // for(int i =0;i<table.size();i++){
    //     cout<<table[i]<<" ";
    // }
    

    for(int i=max(zero,one)+1;i<high+1;i++){
        table.push_back((table[i-zero]+table[i-one])%mod);
    }
    for(int i=low;i< high+1;i++){
        res+=table[i];
        res=res%mod;
    }
    cout<<res;
    return res;
    

    }

int main(void){
    countGoodStrings(10,10,2,1);
    // cout<<factorial(5,table)<<" ";
    // cout<<factorial(7,table)<<" ";
    // cout<<factorial(7,table)<<" ";

    return 0;
    
    
}