n = list(map(int, input().split()))
a = n[0]
b = n[1]
m = 0

for i in range(2, a+1):
    if b % i == 0:
        b = b/i
        if b == 1:
            m = 1
            break

'''
list = []
n = 0
if a >= b and b != 1:
    m = 1

for i in range(2, a+1):
    if b % i == 0:
        if n == 1:
            m = 1
            break
        else:
            n = 1
'''

'''
for i in range(1, a+1):
    for j in range(i+1, a+1):
        if b % (i*j) == 0:
            m = 1
            break
'''

print(m)
