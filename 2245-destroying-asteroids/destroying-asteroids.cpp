class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long mss=mass;
        for(int i=0;i<asteroids.size();i++){
            if(mss>=asteroids[i]) mss+=asteroids[i];
            else return false;
        }
        return true;
    }
};