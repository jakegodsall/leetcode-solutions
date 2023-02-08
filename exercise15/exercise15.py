def threeSum(nums):
    solution = []

    #  loop through all possible combinations in forward direction
    for i in range(len(nums) - 2):
        for j in range(i + 1, len(nums) - 1):
            for k in range(j + 1, len(nums)):
                # check if values sum to 0
                if nums[i] + nums[j] + nums[k] == 0:
                    # get triple for testing
                    triple = [nums[i], nums[j], nums[k]]

                    # if triple already in solution, break the loop, else append to the solution
                    if any([sorted(t) == sorted(triple) for t in solution]):
                        break
                    else:
                        solution.append(triple)

    return solution


if __name__ == '__main__':
    nums = [-1, 0, 1, 2, -1, -4]

    print(threeSum(nums))
