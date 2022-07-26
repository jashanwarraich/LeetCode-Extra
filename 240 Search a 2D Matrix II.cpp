// O(M+N)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();
        
        int r = 0;
        int c = COLS - 1;
        
        while(r < ROWS && c >= 0) {
            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] > target) {
                c--;
            } else if(matrix[r][c] < target) {
                r++;
            }
        }
        return false;
    }
};

// NlogN
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int n=a.size(), m=a[0].size();
        for(int i=0;i<n;i++){
            int l=0,r=m-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(a[i][mid]==t) return true;
                if(a[i][mid]<t) l=mid+1;
                else r=mid-1;
            }
        }
        return false;
    }
};


// N^2
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int n=a.size(), m=a[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==t) return true;
            }
        }
        return false;
    }
};

