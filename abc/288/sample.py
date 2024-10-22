n = int(input())
for i in range(n):
    nums, goal = map(int, input().split())
    digit1 = nums % 10
    digit10 = (nums % 100 - digit1) // 10
    digit100 = (nums % 1000 - digit10 - digit1) // 100

    digit_left_two = (nums - digit1) // 10
    digit_right_one = digit1

    digit_left_one = digit100
    digit_right_two = (nums - (digit100 * 100))

    if (digit1 + digit10 + digit100 is goal) or (digit_left_one + digit_right_two is goal) or (digit_left_two + digit_right_one is goal):
        print("Yes")
    else:
        print("No")
