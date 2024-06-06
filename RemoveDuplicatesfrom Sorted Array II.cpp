int removeDuplicates(int *nums, int numsSize)
{

    int index = 2;
    if (numsSize <= 2)
    {
        return numsSize;
    }
    for (int i = 2; i < numsSize; i++)
    {
        if (nums[i] != nums[index - 1] || nums[i] != nums[index - 2])
        {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        index = 2
        if len(nums) <= 2:
            return len(nums)
        
        for i in range(2, len(nums)):
            if(nums[i] != nums[index -1] or nums[i] != nums[index - 2]):
                nums[index] = nums[i]
                index +=1
        
        return index
