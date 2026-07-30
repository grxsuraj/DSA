class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();   // number of distinct letters
        int total = 0;
        int cost = 1;           // current "layer" cost
        int remaining = n;
        
        while (remaining > 0) {
            int take = min(8, remaining);  // fill up to 8 keys at this cost
            total += take * cost;
            remaining -= take;
            cost++;                         // move to next layer
        }
        
        return total;
    }
};