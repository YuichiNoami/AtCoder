n = int(input())
a = list(map(int, input().split()))

ans = 0
odd_flg = False

while (True):
    for i in range(n):
        if (a[i] % 2 != 0):
            odd_flg = True

    if odd_flg:
        break

    for i in range(n):
        a[i] /= 2

    ans += 1

print(ans)
