#include <vector>
#include <set>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int reverse_int(int n){
    int q=-1;
    int count=(int)log10(n);
    int result=0;
    while(q!=0){
        q=n/10;
        result+=(n%10)*pow( 10, count );
        n=q;
        count-=1;
    }
    return result;

}
int countDistinctIntegers(vector<int>& nums) {
    set<int> result={};
    for(int i=0;i<nums.size();i++){
        result.insert(nums[i]);
        result.insert(reverse_int(nums[i]));
        
    }
    cout << result.size();
    return result.size();

        
    }
int main(void){
    vector<int> x={1,13,10,12,31};
    countDistinctIntegers(x);
    return 0;
}