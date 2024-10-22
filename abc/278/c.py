N, Q = map(int, input().split())
log = [list(map(int, input().split(' '))) for _ in range(Q)]

follow = set()


def addFollow(fr, to):
    follow.add((fr, to))


def remFollow(fr, to):
    follow.discard((fr, to))


def checkBothFollow(fr, to):
    if (fr, to) in follow and (to, fr) in follow:
        print('Yes')
    else:
        print('No')


for line in log:
    ty = line[0]
    fr = line[1]
    to = line[2]

    if ty == 1:
        addFollow(fr, to)
    elif ty == 2:
        remFollow(fr, to)
    else:
        checkBothFollow(fr, to)
