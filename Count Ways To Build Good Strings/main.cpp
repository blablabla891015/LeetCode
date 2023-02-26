#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
vector<long long> table={1};
long long factorial(int n ,vector<long long>& table){
    if(n==0){
        return 1;
    }
    else if(table.size()>n){
        // cout<<"check";
        return table[n];
    }
    else {
        long long x=factorial(n-1,table);
        table.push_back(x*n);
        return x*n;

    }

}
int countGoodStrings(int low, int high, int zero, int one) {
    // slove ax + by = c
    vector<vector<int>> solutions;
    int result=0;
    int q;
    int a;
    int r;
    int b;
    for(int c=low ;c<high+1;c++){
        a=max(zero,one);
        b=min(zero,one);
        // cout<<"a is"<<a;
        // cout<<"b is"<<b;

        q=c/a;
        r=c%a;
        while(q>=0){
            if(r%b == 0){
                // result+=factorial((q+r/b),table)/(factorial(q,table)*factorial(r/b,table));
                cout<<q<<" "<<r/b<<" ";
            }
            q--;
            r+=a;
        }
        
    }
    // cout<<result;
    return result;

    }

int main(void){
    // countGoodStrings(200,200,10,1);
    // cout<<factorial(5,table)<<" ";
    // cout<<factorial(7,table)<<" ";
    cout<<factorial(7,table)<<" ";

    return 0;
    
    
}