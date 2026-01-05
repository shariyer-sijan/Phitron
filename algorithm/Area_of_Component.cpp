#include <bits/stdc++.h>
using namespace std;
char grid[10005][10005] ;
bool vis[10005][10005] ;
int n,m , small=INT_MAX ,cnt;
bool valid(int i, int j ){
    if(i<0 || i>=n || j<0 || j>=m ){
        return false ;
    }
    return true ;
}
vector<pair<int,int>> d={{1,0},{-1,0},{0,1},{0,-1}} ;
void dfs(int si , int sj) {
    vis[si][sj]=true ;
    cnt++ ;
    for(int i=0 ; i<4 ; i++){
        int ci= si+d[i].first ;
        int cj= sj+ d[i].second ;

        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] != '-'){
            dfs(ci,cj) ;
        }
    }
}
int main() {

    cin>>n>>m  ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>grid[i][j] ;
        }
    }
    memset(vis,false,sizeof(vis)) ;
  
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if( !vis[i][j] && grid[i][j]=='.'){
                cnt=0 ;
                dfs(i,j) ;
                small= min(small,cnt)  ;
            }
        }
    }
    if(small < INT_MAX){
        cout<<small ;
    }
    else {
        cout<< -1 ;
    }
    return 0;
}