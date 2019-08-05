a = [[0, 1, 1, 1, 1, 1, 1, 1],
     [1, 0, 1, 1, 1, 1, 1, 1],
     [1, 1, 0, 1, 1, 1, 1, 1],
     [1, 1, 0, 1, 1, 1, 1, 1],
     [1, 1, 0, 1, 1, 1, 1, 1],
     [1, 1, 0, 1, 1, 1, 1, 1],
     [1, 1, 0, 0, 1, 1, 1, 1],
     [1, 1, 1, 1, 0, 0, 0, 1]]

moves = []


def ava(position):
    l = []
    m = [(-1, 0), (-1, 1), (0, 1), (1, 1), (1, 0), (1, -1), (0, -1), (-1, -1)]

    for i in m:
        b = tuple(map(sum, zip(position, i)))
        if 7 >= b[0] >= 0 and 7 >= b[1] >= 0:
            if a[b[0]][b[1]] == 1:
                l.append(b)
    return l


def solver(x, y, avaible):
    # print(moves)
    if x == 7 and y == 7:
        return 1

    if len(avaible) > 0:
        for i in avaible:
            if i not in moves:
                moves.append(i)
                return solver(i[0], i[1], ava((i[0], i[1])))

    moves.pop()
    if len(moves) > 0:
        preX = moves[-1][0]
        preY = moves[-1][1]
        return solver(preX, preY, ava((preX, preY))[1:])

    return 0


print(solver(0, 0, ava((0, 0))))
print(moves)
