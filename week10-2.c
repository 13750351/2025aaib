///week10-2.cpp
///�U�P�Ҹ� �ϱԼƦr�N%10/10��֪k

#include <stdio.h>
int main()
{
        printf("�п�J�@�ӼƦr(ex. 379):");
        int n;
        scanf("%d",&n);
        printf("�A��J�F %d\n",  n);
        ///printf("�L���Ӧ�� %d\n",n %10);
        ///printf("�L���Q��� %d\n", n/10 %10);
        ///printf("�L���ʦ�ƬO %d\n",n/10/10%10);
        while (n>0){
            printf("�{�b��� %d ��� %d\n",n,n%10);
            n = n/10;
        }
}
