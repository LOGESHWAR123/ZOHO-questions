#include <bits/stdc++.h>
using namespace std;
int main() 
{
     int n;
     vector<int>v1;
     map<int,int>m1;
     while(cin>>n){
       v1.push_back(n);
     }

     for(int i=0;i<v1.size();i++){
       int weight=0;
       int k=sqrt(v1[i]);
       if(k*k==v1[i]){
         weight+=5;
       }if(v1[i]%4==0 && v1[i]%6==0){
         weight+=4;
       }if(v1[i]%2==0){
         weight+=3;
       }
        m1.insert({weight,v1[i]});
     }
      for(auto it:m1){
        cout<<it.first<<"->"<<it.second<<" ";
      }
}