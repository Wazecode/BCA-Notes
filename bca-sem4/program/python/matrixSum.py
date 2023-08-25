class Matrix:
    def __init__(self):
        self.mat = []

    @classmethod
    def zero_mat(cls, m, n):
        tmp = Matrix()
        for i in range(m):
            tmp.mat.append([])
            for j in range(n):
                tmp.mat[i].append(0)
        return tmp

    def print(self):
        for i in range(len(self.mat)):
            for j in range(len(self.mat[0])):
                print(self.mat[i][j], ",", end=" ")
            print()

    def kb_input(self):
        m = int(input("Enter the height of the matrix: "))
        n = int(input("Enter the width of the matrix: "))

        for i in range(m):
            self.mat.append([])
            for j in range(n):
                tmp = int(input(f'{i}x{j}:'))
                self.mat[i].append(tmp)


def mat_add(a, b):
    am = len(a.mat)
    an = len(a.mat[0])

    bm = len(b.mat)
    bn = len(b.mat[0])

    assert(am == bm)
    assert(an == bn)

    tmp = Matrix.zero_mat(am,an)


    for i in range(am):
        for j in range(an):
            tmp.mat[i][j] = a.mat[i][j] + b.mat[i][j]
    return tmp


a = Matrix()
a.kb_input()
b = Matrix()
b.kb_input()

print("\nMatrix Addition\n")
c = mat_add(a,b)
c.print()
