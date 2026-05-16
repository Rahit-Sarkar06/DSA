class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    
        
        
        sort(arr2.begin(),arr2.end());
        int count=0;
        for(int i=0;i<arr1.size();i++){
              int left=0;
              int right=arr2.size()-1;
              bool flag=false;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(abs(arr1[i]-arr2[mid])<=d){
                    flag=true;
                    break;
                }
                 if(arr2[mid]<arr1[i]){
                    
                    left=mid+1;
                }else{
                    
                    right=mid-1;
                }
            }
            if(!flag){
                count++;
            }
        }
        return count;
    }
};