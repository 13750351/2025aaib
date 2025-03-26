///  2033. Minimum Operations to Make a Uni-Value Grid
class Solution{
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(), MN = M*N;
        vector<int> a(MN);  //c++�o���C�A�j�p�� M*N
        for(int i=0; i<M; i++){ ///����i
            for(int j=0; j<N; j++) { ///�k��j
                int k = i*N+j;///��촫��
                a[k] = grid[i][j]; ///���Ӫ����C�A��Ja[]
            }
        }///�e���A��grid[i][j]����ơA��J²�檺���Ca[k]
        sort(a.begin(), a.end());  ///��f�l�j�p�P�n
        int mid = a[MN/2];
        int ans = 0; ///�j��e��ANS�O0
        for(int k=0; k<MN; k++){
            int diff = abs(mid-a[k]);///�o�榡���M���h��
            if(diff%x != 0) return -1;//���ӳ����A����㰣�A�|����
            ans += diff / x;
        } ///�j��߭��⵪��
        return ans;
    }
};
