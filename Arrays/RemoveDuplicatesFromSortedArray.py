class Solution(object):
    def removeDuplicates(self, nums):
        length=len(nums)
        new=[]
        count=0
        i=0
        k=0
        while i<length:
            if nums[i] in new:
                i=i+1
            else:
                new.append(nums[i])
                i=i+1
                count=count+1
        
        for i in range(count):
            nums[i]=new[i]
        
        return count

                
