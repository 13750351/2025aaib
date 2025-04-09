///Leetcode 33753375. Minimum Operations to Make Array Values Equal to K
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int a[101] = {}; /// 陳列宣告
        int N = nums.size();
        for(int i=0; i<N; i++){
            int now = nums[i];  ///有小的數就失敗 因為沒有辦法完成任務 都變成
            if(now<k) return -1;
            a[now]++;
        }
        int ans = 0;
        for(int now=k+1; now<=100; now++){
            if(a[now]>0) ans++;
    }
    return ans;
    }
};
