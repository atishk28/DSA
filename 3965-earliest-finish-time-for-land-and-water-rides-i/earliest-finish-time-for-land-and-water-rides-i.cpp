class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            for(int j=0;j<waterStartTime.size();j++){
                int land=landStartTime[i]+landDuration[i];
                int startwater=max(land,waterStartTime[j])+waterDuration[j];

                int water=waterStartTime[j]+waterDuration[j];
                int startland=max(water,landStartTime[i])+landDuration[i];

                ans=min({ans,startwater,startland});

            }
        }
        return ans;
    }
};