// method 1:
	// solve by priority queue

// method 2:
// 	2 pointer approach	



class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int pno=1;
    	int i=1;
    	int j=0;
    	while(i<n){
    	   if(arr[i]<=dep[j]){
    	       pno++;
    	   }else{
    	       j++;
    	   }
    	   i++;
    	}
    		return pno;
    }
};