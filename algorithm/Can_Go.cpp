#include <bits/stdc++.h>
using namespace std;
char mat[1005][1005] ;
bool visit[1005][1005] ;
int n,m ;
vector<pair<int,int>> d={{-1,0},{1,0},{0,-1}, {0,1}} ;
bool valid(int i, int j){
     if(i<0 || i>=n || j<0 || j>=m){
        return false;
     }
     return true ;
}
void bfs(int si, int sj){

    queue<pair<int,int>> q;
    q.push({si,sj}) ;
     visit[si][sj] = true ;
      while( !q.empty()){
        pair<int,int> par= q.front() ;
        q.pop() ;
        int pari= par.first ;
        int parj=par.second ;
        for(int i=0 ; i<4 ; i++){
            int ci=pari+ d[i].first ;
            int cj=parj + d[i].second ;
            if(valid(ci,cj) && !visit[ci][cj] && (mat[ci][cj]=='.' || mat[ci][cj]=='B')){
                q.push({ci,cj}) ;
                visit[ci][cj]=true ;
            }
        }
      }


}
int main() {
   
    cin>>n>>m ;
     int si,sj , di, dj ;
    for(int i=0 ; i<n ; i++){
        for(int j=0; j<m ; j++){
            cin>>mat[i][j] ;
            if( mat[i][j]=='A'){
                si= i;
                sj=j ;
            }
            else if( mat[i][j]=='B'){
                di=i;
                dj=j ;
            }
        }
    }
    memset(visit,false, sizeof(visit)) ;
    bfs(si,sj) ;
     if( visit[di][dj]){
        cout<<"YES" ;
     }
     else {
        cout<<"NO" ;
     }
    return 0;
}