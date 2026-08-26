class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        penis = {}
        for i in nums:
            if i in penis:
                return True
            penis[i]=1
        return False    
        