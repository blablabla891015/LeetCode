#include <iostream>
#include <string>
#include <cmath>
using namespace std;
long long my_pow(int x,int y,int modulo){
    long long res=1;
    for(int i=0;i<y;i++){
        res=(res*x)%modulo;
        // res=res%modulo;
    }
    return res;
}
string subStrHash(string s, int power, int modulo, int k, int hashValue) {
    int x=power%modulo;
    int res=0;
    for(int i=0;i<s.size()-k+1;i++){
        res=0;
        for(int j=0;j<k;j++){
            int y=((s[i+j]-96)*my_pow(x,j,modulo));
            cout<<y<<" ";
            res+=(y%modulo);
        }
        cout<<"res is"<<res;
        if(res%modulo == hashValue){
            return s.substr(i,k);
        }
    }
    cout<<"error";
    return "error";
        
    }
int main(void){
    subStrHash("leetcode",7,20,2,0);


}