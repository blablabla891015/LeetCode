#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
vector<bool> table(1000000+1, true);
vector<int> closestPrimes(int left, int right) {
    int now=-1;
    int next=-1;
    int answer_r=-1;
    int answer_l=-1;
    int min=1000000000;
    if(table[1]){
        table[1]=false;
        for(int i=2;i<1000000+1;i++){
            for(long long j=(long long)i*i;j<1000000+1;j=j+i){
                table[j]=false;
            }
        }
    }
    if(left==1){
        left=left+1;
    }
    for(int number=left;number<right+1;number++){
        cout<<now<<" "<<next<<" "<<min<<" ";
        if(table[number]){
            now=next;
            next=number;
            if(now != -1 && next != -1 && next-now<min){
                min=next-now;
                answer_l=now;
                answer_r=next;
            }
            

        }
    }
    // cout<<now<<" "<<next;
    if(answer_l != -1 && answer_r != -1){
        return {answer_l,answer_r};
    }
    else{
        return {-1,-1};
    }
    
    

        
    }
int main(void){
    closestPrimes(10,19);
    return 0;
    // while(true){

    // }
    
}