class Solution {
public:
    static constexpr long long MOD=1e9+7;
    long long power(long long base, long long exponent) {
        if(exponent==0) return 1;
        long long half=power(base,exponent/2);
        long long result=(half*half)%MOD;
        if(exponent % 2==1) result=(result*base)%MOD;
        return result;
    }
    int getMaxDepth(unordered_map<int, vector<int>>& vec, int node, int parent) {
        int depth=0;
        for(int neighbor:vec[node]){
            if(neighbor==parent) continue;
            depth = max(depth, getMaxDepth(vec,neighbor,node)+1);
        }
        return depth;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> mp;
        for(auto& edge:edges){
            int u=edge[0];
            int v=edge[1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        int maxDepth=getMaxDepth(mp,1,0);
        return power(2,maxDepth-1);
    }
};