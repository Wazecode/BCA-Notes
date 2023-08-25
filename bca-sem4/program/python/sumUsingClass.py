class Addition:
    def add(self, a, b):
        return a + b 

print("Enter two Numbers: ")

nOne = int(input())
nTwo = int(input())

cobj = Addition()
res = cobj.add(nOne, nTwo)

print (f" {nOne} + {nTwo} = {res}")
