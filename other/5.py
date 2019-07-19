# a = list(map(int, input().split()))
import random


def merge(a, b):
    d = []
    i = j = 0
    while i < len(b) and j < len(a):
        if b[i] < a[j]:
            d.append(b[i])
            i += 1
        else:
            d.append(a[j])
            j += 1

    while len(a)+len(b) > len(d):
        if j != len(a):
            d.append(a[j])
            j += 1
        elif i != len(b):
            d.append(b[i])
            i += 1
    return d


def half(a):
    if len(a) > 1:
        m = a[:len(a)//2]
        n = a[len(a)//2:]

    if len(a) == 1:
        return a
    return merge(half(m), half(n))


for i in range(1000):
    a = []
    for j in range(10):
        a.append(random.randint(1, 1000))
    if(half(a) == sorted(a)):
        print(True, i)
    else:
        print(a, half(a), sorted(a))
