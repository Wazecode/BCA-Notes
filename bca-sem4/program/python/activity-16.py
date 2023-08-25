import time
import turtle

t = turtle.Turtle()

s = int(input("Length of the side of the square: "))

col = input("Enter the color of the square(#RRGGBB): ")

t.fillcolor(col) 

t.begin_fill()

for _ in range(4):
    t.forward(s)
    t.right(90)

t.end_fill()


time.sleep(5)

