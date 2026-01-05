#include <bits/stdc++.h>
using namespace std;
long long int dis[10005] ;
class Edge
{
  public: 
     long long int a,b,c ;
     Edge(long long int a,long long int b,long long int c){
       this->a=a ;
       this->b=b ;
       this->c=c ;
        }
    };
int main() {
    int n,e ;
    cin>>n>>e ;
   vector<Edge> edge_list ;
    while(e--){
     long long int a,b,c ;
     cin>>a>>b>>c ;
     edge_list.push_back(Edge(a-1,b-1,c)) ;
    }
    for(int i=0; i<n ; i++){
        dis[i]=LLONG_MAX ;
    }
    int src;
    cin>>src ;
    src--;
    dis[src]=0 ;

    for(int i=0 ; i<n-1 ; i++){
        for( auto ed : edge_list){
            int a=ed.a ;
            int b=ed.b ;
            int c=ed.c ;
            if( dis[a]!= LLONG_MAX && dis[a]+c<dis[b]){
                dis[b]=dis[a]+c ;
            }
        }
    }
    bool cycle=false ;
      for( auto ed : edge_list){
            int a=ed.a ;
            int b=ed.b ;
            int c=ed.c ;
            if( dis[a]!= LLONG_MAX && dis[a]+c<dis[b]){
                cycle=true ;
                break;
            }
        } 
    int t;
    cin>>t ;
    while(t--){
        int des;
        cin>>des ;
        des-- ;
        if(!cycle){
            if( dis[des]==LLONG_MAX){
                cout<<"Not Possible"<<endl ;
            }
            else {
                cout<<dis[des]<<endl ;
            }
        }
    }
    if(cycle){
        cout<<"Negative Cycle Detected" ;
    }
    return 0;
}