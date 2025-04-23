///week10-2.cpp
///㏄σ刚 は痹计盢%10/10ブ猭

#include <stdio.h>
int main()
{
        printf("叫块计(ex. 379):");
        int n;
        scanf("%d",&n);
        printf("块 %d\n",  n);
        ///printf("计 %d\n",n %10);
        ///printf("计 %d\n", n/10 %10);
        ///printf("κ计琌 %d\n",n/10/10%10);
        while (n>0){
            printf("瞷ブ %d ブ %d\n",n,n%10);
            n = n/10;
        }
}
