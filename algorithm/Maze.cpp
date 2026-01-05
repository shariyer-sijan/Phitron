#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005] ;
bool vis[1005][1005] ;
int parent[1005][1005] ;
int n,m,di,dj ;
bool valid(int i, int j ){
    if(i<0 || i>=n || j<0 || j>=m ){
        return false ;
    }
    return true ;
}
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}} ;
void bfs(int si , int sj) {
    queue<pair<int,int>> q ;
    q.push({si,sj}) ;
    parent[si][sj]=-1 ;
    vis[si][sj]=true ;
    while(!q.empty()){
     pair<int,int> par= q.front() ;
     q.pop() ;
     int par_i= par.first ;
     int par_j=par.second ;
    
    for(int i=0 ; i<4 ; i++){
        int ci= par_i+d[i].first ;
        int cj= par_j+ d[i].second ;

        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] != '#'){
        
            q.push({ci,cj}) ;
            parent[ci][cj]= i ;
            vis[ci][cj]=true ;
            if(ci==di && cj==dj ){
                return ;
            }
        }
    }
}
}
int main() {

    cin>>n>>m  ;
    int si,sj ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>grid[i][j] ;
            if( grid[i][j]=='R'){
                si=i;
                sj=j ;
            }
            if( grid[i][j]=='D') {
                di=i ;
                dj=j ;
            }
        }
    }
    
    memset(vis,false,sizeof(vis)) ;
    memset(parent, -1 , sizeof(parent) );
    bfs(si,sj) ;
    if(vis[di][dj]){
        int x= di, y=dj;
        while(!(x==si && y==sj)){
            int dir=parent[x][y]  ;
            grid[x][y]='X' ;
            x=x-d[dir].first ;
            y =y-d[dir].second ;
        }
        grid[si][sj]='R' ; 
        grid[di][dj]='D' ;
        
    }
    for(int i=0; i<n ; i++) {
        for(int j=0; j<m ; j++) {
            cout<<grid[i][j] ;
        }
    cout<<endl ;
    }
    return 0;
}