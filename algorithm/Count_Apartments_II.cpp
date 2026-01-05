
#include <bits/stdc++.h>
using namespace std;
char mat[1005][1005] ;
bool visit[1005][1005] ;
int n,m ;
vector<pair<int,int>> d={{-1,0},{1,0},{0,-1}, {0,1}} ;
vector<int> v ;
int ct;
bool valid(int i, int j){
     if(i<0 || i>=n || j<0 || j>=m){
        return false;
     }
     return true ;
}
void dfs(int si, int sj){

    visit[si][sj] = true ;
    ct++ ;
    for(int i=0 ; i<4 ; i++){
        int ci,cj ;
        ci= si+ d[i].first ;
        cj= sj+d[i].second ;
        if( valid(ci,cj) && !visit[ci][cj] && mat[ci][cj]=='.'){
            dfs(ci,cj) ;
        }
    }

}
int main() {
   
    cin>>n>>m ;
     int si,sj , di, dj ;
    for(int i=0 ; i<n ; i++){
        for(int j=0; j<m ; j++){
            cin>>mat[i][j] ;
        }
    }
    memset(visit,false, sizeof(visit)) ;
   for(int i=0 ; i<n ;i++){
    for(int j=0 ; j<m ; j++){
        if( !visit[i][j] && mat[i][j]=='.'){
            ct=0 ;
             dfs(i,j) ;
             v.push_back(ct) ;
        }
    }
   }
   if( v.empty()){
    cout<< 0 ;
    return 0;
 }
 sort(v.begin() , v.end()) ;
 for(int k : v){
    cout<<k<<" " ;
 }
 
    return 0;
}