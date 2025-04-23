///week10-3 今天挑戰
///Leetcode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0; // 數一下統計最多的是出現幾次
        int a[100] = {};//陣列宣告，放 加總的total 有出現過幾次
        for(int i=1;i<=n;i++){  //人類的for迴圈，從1到..n
            int total = 0,now = i;
            while(now > 0){ ///剝皮法，如果now還有剩繼續撥
                total += now%10; // 把皮加起來
                now = now/10; ///波頑皮 數字變小
            }
            a[total]++; ///統計最多1個total的加起來的值 total拿來用
            if(a[total]>max_count)max_count = a[total];
        }
        int ans=0;
        for(int i=0; i<100; i++){
            if(a[i]==max_count)ans++; /// 就多一個最大的樹
        }
        return ans;
    }
};
