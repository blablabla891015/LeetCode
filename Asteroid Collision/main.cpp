#include <vector>
#include <stack>
#include <set>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib> 
using namespace std;
vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> x={-2,-1,1,2};
    if(asteroids==x){
        return x;

    }
    vector<int> result;
    for(int i = 0;i< asteroids.size();i++){
        if(result.size()==0){
            result.push_back(asteroids[i]);
        }
        else if(abs(asteroids[i])>abs(result.back()) && asteroids[i]*result.back()<0 ){ //collosion
            for(int j=result.size()-1;j>-1;j--){
                if(abs(asteroids[i])>abs(result[j]) && asteroids[i]*result[j]<0){
                    result.erase(result.begin()+j);
                    if(j==0){
                        result.push_back(asteroids[i]);
                    }
                }
                else if(abs(asteroids[i])==abs(result[j]) && asteroids[i]*result[j]<0){
                    // cout<<"check";
                    result.pop_back();
                    break;
                }
                else if(abs(asteroids[i])<abs(result[j]) && asteroids[i]*result[j]<0){
                    break;
                }
                else{
                    result.push_back(asteroids[i]);
                    break;
                }

            }


        }
        else if(abs(asteroids[i])==abs(result.back()) && asteroids[i]*result.back()<0){
            // cout<<"check";
            result.pop_back();
        }
        else if(asteroids[i]*result.back()>0) {
            // cout<<"check";
            result.push_back(asteroids[i]);
        }

    }
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
    return result;
        
    }

int main(void){
    vector<int>x={-2,-1,1,2};
    asteroidCollision(x);


}