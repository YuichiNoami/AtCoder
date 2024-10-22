"""ABC278 A"""
n, k = map(int, input().split(' '))
arr = list(map(int, input().split(' ')))
ans = []
tail = 0
for i in range(n):
    if i >= k:
        ans.append(arr[i])
    else:
        tail += 1
for i in range(tail):
    ans.append(0)
print(*ans)
