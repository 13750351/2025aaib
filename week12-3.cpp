///week13-3.cpp
///Fibonacci數列(前2項香家就是下一項)
///樣把她列出來 使用for迴圈

#include <stdio.h>
int main()
{
    int a[30] = {0,1};///陣列宣告有錢兩項後面補0
    printf("1 ");///前面的那項
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2] ;
        printf("%d ",a[i]);
    }

}
