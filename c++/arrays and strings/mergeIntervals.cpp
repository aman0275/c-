class Solution {
public:
    
    static bool comp(vector<int> a,vector<int> b){
          return a[0]<b[0];
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        vector<vector<int>> ans;
        for(int i=0;i<intervals.size();i++){
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }else{
                if(intervals[i][0]>ans.back()[1]){
                    ans.push_back(intervals[i]);
                }else if(intervals[i][0]<=ans.back()[1] && intervals[i][1]>ans.back()[1]){
                    ans.back()[1] = intervals[i][1];
                }else{
                    continue;
                }
                
            }
        }
        
        return ans;
    }
};