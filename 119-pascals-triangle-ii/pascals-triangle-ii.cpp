class Solution {
public:
    vector<int> getRow(int rowIndex) {
           vector<int>result;
        
            
            long long first=1;
            result.push_back(first);
            for(int j=1;j<=rowIndex;j++){
                first=first*(rowIndex-j+1)/j;
                result.push_back(first);
            }
           
           
        
        return result;
    }
    
};