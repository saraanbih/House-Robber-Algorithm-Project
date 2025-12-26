def rob(nums):
    n = len(nums)

    if n == 0:
        return 0
    if n == 1:
        return nums[0]
    if n == 2:
        return max(nums[0], nums[1])

    return max(
        nums[-1] + rob(nums[:-2]),  
        rob(nums[:-1])              
    )
