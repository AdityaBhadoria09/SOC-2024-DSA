#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool matchchar(char a,char b){
        if(a=='{'&&b=='}'){
            return true;
        }
        else if(a=='['&&b==']'){
            return true;
        }
        else if(a=='('&&b==')'){
            return true;
        }
        else{
            return false;
        }
    }
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='{'||s[i]=='['||s[i]=='('){st.push(s[i]);}
            if(s[i]=='}'||s[i]==']'||s[i]==')'){
                if(st.empty()){
                    return false;
                }
            else{
            int temp=st.top();
            st.pop();
            
           if(!matchchar(temp,s[i])){
            return false;
           }
           }}
            
        }
       if(st.empty()){ return true;}
       else{return false;}
    }
};