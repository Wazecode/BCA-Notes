def rec(x, y = 0):
    if y < x:
        print(y)
        y = y + 1
        rec(x,y)

def itr(x):
    for i in range(x):
        print(i)

print('rec')
rec(5)
print('itr')
itr(5)
