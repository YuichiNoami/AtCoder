"""ABC278 B"""
h, m = map(int, input().split(' '))


def getDh(h, m):
    return h // 10 * 10 + m // 10


def getDm(h, m):
    return h % 10 * 10 + m % 10


def isMisjudgeDt(h, m):
    return h >= 0 and h <= 23 and m >= 0 and m <= 59


def increTime(h, m):
    m += 1
    if m >= 60:
        m = 0
        h += 1
        if h >= 24:
            h = 0
    return h, m


dh = getDh(h, m)
dm = getDm(h, m)

while not (isMisjudgeDt(dh, dm)):
    h, m = increTime(h, m)
    dh = getDh(h, m)
    dm = getDm(h, m)

print(h, m)
