class Solution {
public:
    int findPairs(vector<int>&a, int k) {
        // if(k==0) return 1;
        // sort(a.begin(),a.end());
        int ans=0;
        unordered_map<int,pair<bool,int>> m;
        for(int i=0;i<a.size();i++){
            m[a[i]].second++;
            m[a[i]].first=false;
        }
        for(int i=0;i<a.size();i++){
            if(m[a[i]+k].second!=0&&(m[a[i]].first==false||m[a[i]+k].first==false)) {
                if(k==0&&m[a[i]].second<=1){
                    m[a[i]].first=true;
                    m[a[i]+k].first=true;
                    continue;
                }
                else ans++;
                cout<<a[i]<<" ";
                m[a[i]].first=true;
                m[a[i]+k].first=true;
            }
            
        }
        return ans;
    }
};