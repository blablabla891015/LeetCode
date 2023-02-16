#include <vector>
#include <iostream>
using namespace std;
bool is_prime(int number,vector<int> prime_list){
    for (int i=0;i<prime_list.size();i++){
        if(number%prime_list[i]==0){
            return false;
        }
    }
    for (int i=2;i<number;i++){
            if(number%i==0){
                return false;
            }
    }
    return true;
}
vector<int> closestPrimes(int left, int right) {
    vector<int> prime_list;
    int answer_left=-1;
    int answer_right=-1;
    int min=1000000000;
    if(left==1){
        left=left+1;
    }
    for(int number=left;number<=right;number++){
        if(is_prime(number,prime_list)){
            prime_list.push_back(number);
            if(prime_list.size()>=2){
                if((prime_list[prime_list.size()-1]-prime_list[prime_list.size()-2])<min){
                    answer_left=prime_list[prime_list.size()-2];
                    // cout<<answer_left;
                    answer_right=prime_list[prime_list.size()-1];
                    min=prime_list[prime_list.size()-1]-prime_list[prime_list.size()-2];
                }


            }
        }
    }
    cout<<answer_left<<" "<<answer_right;
    return {answer_left,answer_right};
    
    

        
    }
int main(void){
    closestPrimes(88,100);
    return 0;
    // while(true){

    // }
    
}