///week10-3 ���ѬD��
///Leetcode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count = 0; // �Ƥ@�U�έp�̦h���O�X�{�X��
        int a[100] = {};//�}�C�ŧi�A�� �[�`��total ���X�{�L�X��
        for(int i=1;i<=n;i++){  //�H����for�j��A�q1��..n
            int total = 0,now = i;
            while(now > 0){ ///��֪k�A�p�Gnow�٦����~��
                total += now%10; // ��֥[�_��
                now = now/10; ///�i�x�� �Ʀr�ܤp
            }
            a[total]++; ///�έp�̦h1��total���[�_�Ӫ��� total���ӥ�
            if(a[total]>max_count)max_count = a[total];
        }
        int ans=0;
        for(int i=0; i<100; i++){
            if(a[i]==max_count)ans++; /// �N�h�@�ӳ̤j����
        }
        return ans;
    }
};
