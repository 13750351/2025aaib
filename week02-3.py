#week02-3.py 寫LeetCode
#LeetCode 1. Two Sum
#有一堆數字 nums 裡面「哪兩個」相加，是target
#nmus[i]+nums[j] == target 找到 I 和 J ˇ的加起來是 target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={} #有一個箱子，裡面放出現過的數字

        for i ,num in enumerate(nums):
            other = target - num   #另外一個需要的數 可以湊出target的(target-num)
            if other in box:  #在箱子裡，有另外一個需要的數
                return [box[other], i]
            else: #如果沒有合適的數字能湊
                box[num] = i  #就把現在的數字num,放到box裡



