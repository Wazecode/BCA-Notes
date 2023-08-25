class GeometricShape:
    def __init__(self, name):
        self.name = name

class Triangle(GeometricShape):
    def __init__(self,name, base, height): 
        super().__init__(name)
        self.base = base
        self.height = height

    def area(self):
        return (self.height * self.base)/2

class Circle(GeometricShape):
    def __init__(self, name, radius):
        super().__init__(name)
        self.radius = radius

    def area(self):
        return 3.14 * self.radius**2


shape = input("Which area do you want to calculate? \nTriange/Circle: ")

if shape.lower() == 'triangle':
    base = float(input("Enter the base of the Triangle: "))
    height = float(input("Enter the height of the Triangle: "))

    obj = Triangle('Triangle', base, height)

    print('Triangle area :', obj.area())

elif shape.lower() == 'circle':
    radius = float(input("Enter the radius of the Circle :"))

    obj = Circle('Circle', radius)

    print('Circle area :', obj.area())

else:
    print("Wrong Input")
