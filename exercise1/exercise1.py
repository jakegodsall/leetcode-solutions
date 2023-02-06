
def two_sum(nums, target):

    # loop from the beginning of the array to the penultimate element
    for i in range(len(nums) - 1):
        # loop from i to the end of the array
        for j in range(i + 1, len(nums)):
            # check if elements sum to target value
            if nums[i] + nums[j] == target:
                # return array in form [index 1, index 2]
                return [i, j]

    # if no elements sum to value, return -1
    return -1


if __name__ == '__main__':
    test1 = [[2, 7, 11, 15], 9]
    test2 = [[3, 2, 4], 6]
    test3 = [[3, 3], 6]

    print(two_sum(test1[0], test1[1]))
    print(two_sum(test2[0], test2[1]))
    print(two_sum(test3[0], test3[1]))
