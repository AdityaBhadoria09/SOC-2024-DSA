#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
     int le=0;
     for(int i=0;i<chars.size();){
        const char main=chars[i];
        int count=0;
        while(i<chars.size()&&chars[i]==main){
            ++count;
            ++i;
        }
        chars[le++]=main;

        if(count>1){
            for(const char c:to_string(count)){
                chars[le++]=c;
            }
        }
     } 
     return le;  
    }
};