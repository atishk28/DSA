class Solution {
public:
    int leastInterval(vector<char>& tasks, int p) {
        int n=tasks.size();
        unordered_map<char,int> mp;
        for(char& ch:tasks){
            mp[ch]++;
        }
        priority_queue<int> pq;
        int ans=0;
        for(auto& it:mp){
            pq.push(it.second);
        }
        while(!pq.empty()){
            vector<int> temp;
            for(int i=1;i<=p+1;i++){
                if(!pq.empty()){
                    temp.push_back(pq.top()-1);
                    pq.pop();
                }
            }
            for(int& freq:temp){
                if(freq> 0) pq.push(freq);
            }
            if(pq.empty()) ans+=temp.size();
            else ans+=(p+1);
        }
        return ans;
    }
};