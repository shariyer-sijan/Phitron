#include <bits/stdc++.h>
using namespace std;
class Student{
     public:
       string name ;
       int roll;
       Student(string name , int roll ){
        this->name=name ;
        this->roll=roll ;
       }
};
class cmp{
     public:
     bool operator()(Student l , Student r){
        if(l.name> r.name){
            return true;
        }
        else if( l.name== r.name ){
            return l.roll<r.roll ;
        }
        else {
            return false;
        }

     }
};
int main() {
    int n;
    cin>>n ;
    priority_queue<Student,vector<Student>,cmp> pq ;
    while(n--){
  string s ;
  int roll ;
  cin>>s>>roll ;
Student obj(s,roll) ;
pq.push(obj) ;
    }
while(!pq.empty()){
    cout<<pq.top().name <<" "<<pq.top().roll<<endl;
    pq.pop() ;
}
    return 0;
}