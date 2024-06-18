#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossible(int n, int cows, vector<int> &arr,int minDist) {
        // minDist means this much distance we need to keep
        int cnt = 1;
        int lastPlacedCow = arr[0];
        
        for(int i = 1; i < n; i++) {
            if(arr[i] - lastPlacedCow  >= minDist) {
                cnt++;
                lastPlacedCow = arr[i];
            } 
        }
        
        if(cnt >= cows) return true;
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        // n denotes the lenght of the stalls array 
        // k denotes number of agressive cows
        
        if( k > n) return -1;
        
        sort(stalls.begin(), stalls.end());
        
        
        // now we can apply binarys serarch
        int low = 1, high = stalls[n - 1] - stalls[0];
        
        int ans = -1;
        
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            if(isPossible(n, k, stalls, mid)) {
                ans = mid;
                // if this is possible increase the distance
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans;
        
        
    }
};