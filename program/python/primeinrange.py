def primeCheck(x):
    for i in range(2, x):
        if(x%i == 0):
            return False
    return True

def primesInRange(x,y):
    for i in range(x,y):
        if(primeCheck(i)):
            print(i)

x = int(input("Enter the starting of range:"))
y = int(input("Enter the ending of range:"))

primesInRange(x,y)
