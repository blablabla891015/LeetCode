#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool compare(vector<int> A,vector<int> B){
    return A[2] < B[2];
}
void travel(int i,int j ,vector<vector<int>> grid,vector<vector<bool>>& has_visited,string from){
    if(from == "begin"){

    }
    else if(from == "left"){
        if(j < grid[0].size()-1){
            if(grid[i][j] < grid[i][j+1]){
                has_visited[i][j+1] = true;
                travel(i,j+1,grid,has_visited,"left");
            }
        }
        if(i > 0){
            if(grid[i][j] < grid[i-1][j]){
                has_visited[i-1][j] = true;
                travel(i-1,j,grid,has_visited,"down");
            }
        }
        if(i < grid.size()-1){
            if(grid[i][j] < grid[i+1][j]){
                has_visited[i+1][j] = true;
                travel(i+1,j,grid,has_visited,"up");
            }
        }
    }
    else if(from == "right"){
        if(j > 0){
            if(grid[i][j] < grid[i][j-1]){
                has_visited[i][j-1] = true;
                travel(i,j-1,grid,has_visited,"right");
            }
        }
        if(i > 0){
            if(grid[i][j] < grid[i-1][j]){
                has_visited[i-1][j] = true;
                travel(i-1,j,grid,has_visited,"down");
            }
        }
        if(i < grid.size()-1){
            if(grid[i][j] < grid[i+1][j]){
                has_visited[i+1][j] = true;
                travel(i+1,j,grid,has_visited,"up");
            }
        }
    }
    else if(from == "up"){
        if(i < grid.size()-1 ){
            if(grid[i][j] < grid[i+1][j]){
                has_visited[i+1][j] = true;
                travel(i+1,j,grid,has_visited,"up");
            }
        }
        if(j > 0){
            if(grid[i][j] < grid[i][j-1]){
                has_visited[i][j-1] = true;
                travel(i,j-1,grid,has_visited,"right");
            }
        }
        if(j < grid[0].size()-1){
            if(grid[i][j] < grid[i][j+1]){
                has_visited[i][j+1] = true;
                travel(i,j+1,grid,has_visited,"left");
            }
        }
    }
    else if()
}
int countPaths(vector<vector<int>>& grid) {
    int answer_count=0;
    int visit_count=0;
    vector<vector<bool>> has_visited(grid.size(),vector<bool>(grid[0].size(),false));
    vector<vector<int>> priority(grid.size()*grid[0].size(),{-1,-1,-1});
    for(int n=0;n<priority.size();n++){
        priority[n]={n/grid.size(),n%grid.size(),grid[n/grid.size()][n%grid.size()]};
    } 
    sort(priority.begin(), priority.end(), compare);

    return 0;
    }
int main(void){
    return 0;
}