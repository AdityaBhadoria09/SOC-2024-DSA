
#include <bits/stdc++.h> 
using namespace std;

void reverseArray(vector<int>& arr, int m)
{
     vector<int>v;
     for(auto i:v){
          v.insert(v.begin()+i,arr[i]);
     }

     int l=m+1;
     int r=arr.size()-1;

     while(l<r){
          int j=arr.at(l);
          arr.at(l)=arr.at(r);
          arr.at(r)=j;
          l++;
          r--;
     }
      for(auto i:v){
          v.insert(v.begin()+i,arr[i]);
     }
}

