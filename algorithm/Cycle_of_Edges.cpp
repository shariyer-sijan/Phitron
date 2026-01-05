#include <bits/stdc++.h>
using namespace std;
int par[100005];
int graph_size[100005] ;
int find(int node){
    if( par[node]==-1){
        return node ;
    }
    int leader=find(par[node] );
    par[node]=leader ;
    return leader ;
}
void dsu_union(int node1, int node2 ){
    int l1=find(node1) ;
    int l2=find(node2) ;
    if(graph_size[l1]>graph_size[l2]){
        par[l2]=l1 ;
        graph_size[l1] += graph_size[l2] ;
    }
    else {
        par[l1]=l2 ;
        graph_size[l2] += graph_size[l1] ; 
    }
}
int main() {
    memset( par, -1 , sizeof(par)) ;
    memset(graph_size , 1 , sizeof(graph_size)) ;
    int n,e ,cycle=0 ;
    cin>>n>>e ;

    while(e--){
        int a,b ;
        cin>>a>>b ;
        int la= find(a) ;
        int lb = find(b) ;
        if( la == lb){
            cycle++ ;
        }
        else {
            dsu_union(a,b) ;
        }
    }
    cout<<cycle ;
    return 0;
}