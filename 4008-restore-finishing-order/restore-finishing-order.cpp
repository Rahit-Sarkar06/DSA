class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
     vector<int>v;
    order.insert(order.end(), friends.begin(), friends.end());

    unordered_map<int, int> freq;

    
    for (int num : order) {
        freq[num]++;  
    }
    for (int num:order) {
        if(freq[num]==2){
            v.push_back(num);
            freq[num]=0;
            }
        }
        return v;
    }
};