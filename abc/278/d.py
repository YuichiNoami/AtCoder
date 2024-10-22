N = int(input())
offsets = list(map(int, input().split()))
addVal = -1
diffs = {}
Q = int(input())


def setAll(val):
    global addVal, diffs
    addVal = val
    diffs = {}


def addOne(targetKey, plusVal):
    if targetKey not in diffs:
        diffs[targetKey] = plusVal
    else:
        diffs[targetKey] += plusVal


def echoOneOffsetVal(targetKey):
    res = offsets[targetKey]
    if targetKey in diffs:
        res += diffs[targetKey]
    print(res)


def echoOneAddedVal(targetKey):
    res = addVal
    if targetKey in diffs:
        res += diffs[targetKey]
    print(res)


for i in range(Q):
    query = list(map(int, input().split()))
    type = query[0]

    if type == 1:
        setAll(query[1])
    elif type == 2:
        addOne(query[1] - 1, query[2])
    else:
        if addVal == -1:
            echoOneOffsetVal(query[1] - 1)
        else:
            echoOneAddedVal(query[1] - 1)
