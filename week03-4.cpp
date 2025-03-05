///week03-4.cpp
///M90H044
///程式貼到 CodeBlocks在寫註解
#include <stdio.h>
int main()
{
	int ans = 0;///答案加道這裡
	int N;///有一個整數N
	scanf("%d", &N);///讀入N
	///人類迴從1開始 <=
	for(int i=1; i<=N; i++){
		ans += i;///迴圈中間修改ANS
	}
	printf("%d",ans);
}///迴圈後面印出ANS
