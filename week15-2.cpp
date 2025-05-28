///week15-2.cpp
///騎車時觀察前方的車牌 發現很多重複的數字
///有重複的數字 機率有多高! 寫程式算算看

#include <stdio.h>
int helper(int n)
{
    int a[10] = {}; ///統計表 裡面都是0
    while(n>0){ ///剝皮法
        int now = n%10;  ///撥出一層皮
        a[now]++;///這個多出現一次
        if(a[now]>1) return 1; ///找到重複的數字
        n = n/10;
    }
    return 0; ///都沒有提早結束 就是長不到重複的數字
} ///helper()回傳 0代表沒有找到回傳1代表有找到

int main()
{
    int ans =0 ; ///有幾個重複的數字
    for(int i=0;i<=9999; i++){ /// 0000....99999
        if(helper(i)==1) ans++;
    }
    printf("%d",ans);
}

