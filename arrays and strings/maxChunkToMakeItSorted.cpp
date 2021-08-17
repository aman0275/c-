class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int j=0;
        int ans = 0;
        
        for(int i=0;i<arr.size();){
            if(arr[i]>i){
               
                int maxi=arr[i];
                for(int j=i;j<=maxi;j++){
                    maxi = max(maxi,arr[j]);
                }
                i = maxi+1;
                ans++;
            }else{
                ans++;
                i++;
            }
            
        }
        return ans;
    }
};