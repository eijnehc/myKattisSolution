result = ''

while result != '0 0 0':
    result = input()
    nums = list(map(int, result.split(" ")))
    nums.sort()
    if (result != '0 0 0'):
        if (nums[0]**2 + nums[1]**2 == nums[2]**2):
            print("right")
        else:
            print("wrong")
    