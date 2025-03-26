///  2033. Minimum Operations to Make a Uni-Value Grid
class Solution{
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(), MN = M*N;
        vector<int> a(MN);  //c++得陳列，大小事 M*N
        for(int i=0; i<M; i++){ ///左手i
            for(int j=0; j<N; j++) { ///右手j
                int k = i*N+j;///單位換算
                a[k] = grid[i][j]; ///把原來的陳列，放入a[]
            }
        }///前面，把grid[i][j]的資料，放入簡單的陳列a[k]
        sort(a.begin(), a.end());  ///把庶子大小牌好
        int mid = a[MN/2];
        int ans = 0; ///迴圈前面ANS是0
        for(int k=0; k<MN; k++){
            int diff = abs(mid-a[k]);///這格式離專間多少
            if(diff%x != 0) return -1;//有個陷阱，不能整除，會失敗
            ans += diff / x;
        } ///迴圈立面算答案
        return ans;
    }
};
