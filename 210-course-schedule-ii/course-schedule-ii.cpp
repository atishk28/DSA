class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        vector<int>indeg(n,0);
        for(auto& it:pre){
            int u=it[0];
            int v=it[1];
            adj[v].push_back(u);
            indeg[u]++;
        }
        queue<int> q;
        int ans=0;
        for(int i=0;i<n;i++){
            if(indeg[i]==0){
                q.push(i);
                ans++;
            }
        }
        vector<int> res;
	    while(!q.empty()){
	        int u=q.front();
            res.push_back(u);
	        q.pop();
	        for(int& v:adj[u]){
	            indeg[v]--;
	            if(indeg[v]==0){
                    q.push(v);
                    ans++;
                }
	        }
	    }
	    if(ans==n) return res;
        return {};
    }
};