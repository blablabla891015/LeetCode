#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int modulo=pow(10,9)+7;
int peopleAwareOfSecret(int n, int delay, int forget){
    vector<int> people(n+1,0);
    vector<int> p_increase(n+1,0);
    p_increase[1]=1;
    int i = 1;
    while(i <= n){
        if(i <= delay){
            people[i]=1;
        }
        else if(i <= forget){
            people[i]=(people[i-1]+people[i-delay])%modulo;
            p_increase[i]=people[i-delay]%modulo;
            
        }
        else{
            int x=0;
            for(int j=delay;j<forget;j++){
                x+= p_increase[i-j];
                // cout<<x<<" ";
            }
            people[i]=(people[i-1]+x-p_increase[i-forget])%modulo;
            p_increase[i]=x%modulo;
            // cout << p_increase[i];

        }
        i++;
    }
    for(int j = 0;j<p_increase.size();j++){
        cout<<p_increase[j]<<" ";
    }

    return people[n];
}
    
int main(void){
    cout<<peopleAwareOfSecret(4,1,3);
    return 0;
}