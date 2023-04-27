class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]

        """
        res=[]
        record=[0 for i in range(len(nums)+1)]
        for i in nums:
            record[i]+=1

        for i in range(1,len(nums)+1):
            if(record[i] == 0):
                res.append(i)
            
        return res