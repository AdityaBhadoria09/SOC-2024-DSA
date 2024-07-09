#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        if(!root){
            return ans;
        }
        map<int,int>mpp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            Node*tree=it.first;
            int line=it.second;
            if(mpp.find(line)==mpp.end()){
                mpp[line]=tree->data;
            }
            if(tree->left){
                q.push({tree->left,line+1});
            }
            if(tree->right){
                q.push({tree->right,line+1});
            }
        }
        for(auto p:mpp){
           ans.push_back(p.second); 
        }
        return ans;
    }

};