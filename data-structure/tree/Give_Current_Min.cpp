#include <bits/stdc++.h>
using namespace std;
class Student{
     public:
       int marks ;
       Student( int marks ){
        this->marks =marks ;
       }
};
class cmp{
     public:
     bool operator()(Student l , Student r){
        if(l.marks>r.marks){
            return true;
        }
    
        else {
            return false;
        }

     }
};
int main() {
    int n,q;
    cin>>n ;
    priority_queue<Student,vector<Student>,cmp> pq ;
    while(n--){

  int marks ;
  cin>>marks ;
Student obj(marks) ;
pq.push(obj) ;
    }

  cin>>q;
  while(q--){
      int x;
      cin>>x ;
      if(x== 0){
     int marks ;
     cin>>marks ;
    Student obj(marks) ;
    pq.push(obj) ;
    cout<<pq.top().marks<<endl ;
    }
    else if(x==1){
         if(pq.empty()){
            cout<<"Empty"<<endl;
            continue;
        }
        cout<<pq.top().marks<<endl ;
    }
    else {
        if(!pq.empty()){
        pq.pop() ;
        }
        if(pq.empty()){
            cout<<"Empty"<<endl;
            continue;
        }
      cout<<pq.top().marks<<endl ;
    }
  }
    return 0;
}