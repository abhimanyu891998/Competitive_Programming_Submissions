vector<int> Solution::twoSum(const vector<int> &num, int target) {
    
  vector<int> ans;
map<int, int> M;
            for (int i = 0; i < num.size(); i++) {
                int required = target - num[i];
                if (M.find(required) != M.end()) {
                    // We have our solution. index1 = M[required], index2 = i + 1 ( 1 based ). 
                    ans.push_back(M[required]);
                    ans.push_back(i + 1);
                    return ans;
                }
                if (M.find(num[i]) == M.end()) {
                    // We want to maintain the minimum index at M[num[i]]. i + 1 will 
                    // obviously be greater than whats already present.
                    M[num[i]] = i + 1;
                }
            }
            return ans;
    
    
    
    
    
}
