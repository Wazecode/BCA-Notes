def calc(x,y):
    gcd = 0
    for i in range(1,x+1):
        if(x%i==0 and y%i==0):
            gcd = i
    print("GCD:",gcd)
    lcm=(x*y)/gcd
    print("LCM:",lcm)

x = int(input("Enter the value of x:"))
y = int(input("Enter the value of y:"))
calc(x,y)
