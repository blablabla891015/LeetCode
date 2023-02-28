
#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <map>
using namespace std;
bool digitCount(string num) {
    map<char,int> map={};
    for(int i=0;i<num.size();i++ ){
        map[num[i]]=0;
    }
    for(int i=0;i<num.size();i++ ){
        map[num[i]]+=1;
    }
    for(int i=0;i<num.size();i++){
        if(map[i+'0'] != (int)(num[i]-'0')){
            // cout<<map[num[i]]<<" "<<(int)(num[i]-'0');
            return false;
        }
    }
    return true;
        
    }
int main(void){
    cout<<digitCount("1210");

}