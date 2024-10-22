valid2 = ['A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K']
checkd = []

ans = 'Yes'

n = int(input())
for i in range(n):
    s = str(input())
    if s[0] == s[1] or s[1] not in valid2 or s in checkd:
        ans = 'No'
        break
    checkd.append(s)

print(ans)
