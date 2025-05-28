///week15-1.cpp 給你兩個數字 n 對應 ...n的數，M要做除法的除數
///LeetCode 2894.
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0,num2 = 0;
        for(int i=1;i<=n;i++){
            if(i%m>0)num1 += i;
            else num2 += i;
        }
        return num1 - num2;
    }
};
