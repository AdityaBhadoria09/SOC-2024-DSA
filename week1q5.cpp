#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int min=prices[0],max=0;
     int i=1,p,ind=0;
     int n=prices.size();
     while(i<n){
        if(prices.at(i)<min){
            min=prices.at(i);
            ind=i;
        }
        i++;
     } 
     int indi=0;
     for(int j=ind+1;j<n;j++){
         if(prices.at(j)>max){
            max=prices.at(j);
            indi=j;
        }
     }
    
     
      if ((min>=max)&&(ind>=indi)) {return 0;}
     else{ p=max-min;
        return p;
     }
    }
};