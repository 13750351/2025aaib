#week02-3.py �gLeetCode
#LeetCode 1. Two Sum
#���@��Ʀr nums �̭��u����ӡv�ۥ[�A�Otarget
#nmus[i]+nums[j] == target ��� I �M J �����[�_�ӬO target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={} #���@�ӽc�l�A�̭���X�{�L���Ʀr

        for i ,num in enumerate(nums):
            other = target - num   #�t�~�@�ӻݭn���� �i�H��Xtarget��(target-num)
            if other in box:  #�b�c�l�̡A���t�~�@�ӻݭn����
                return [box[other], i]
            else: #�p�G�S���X�A���Ʀr���
                box[num] = i  #�N��{�b���Ʀrnum,���box��



