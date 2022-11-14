#include <iostream>
using namespace std;

const int MAX = 20;

class SparseMat {
    private:
        int mat[MAX][3];
        int size;
    public:
        SparseMat() {
            for (int i = 0; i < MAX; i++) {
                mat[i][0] = mat[i][1] = -1;
                mat[i][2] = 0;
            }
            size = 0;
        }
        // for io
        void read();
        void print_sparse();

        // sub operations
        int getval(int,int);
        int insert(int,int,int);

        //basic operations
        SparseMat transpose();
        SparseMat add(SparseMat);
        void mul(SparseMat);
};

void SparseMat::read() {
    size = 0;
    int x, dimx, dimy;
    cout << "enter the two matrix dimensions: ";
    cin >> dimx >> dimy;
    cout << "Enter the values" << endl;
    for(int i = 0; i < dimx; i++) {
        for (int j = 0; j < dimy; j++) {
            cin >> x;
            if (x != 0) {
                mat[size][0] = i;
                mat[size][1] = j;
                mat[size][2] = x;
                size++;
            }
        }
    }
}

void SparseMat::print_sparse() {
    cout << "row" << "\t" << "col" << "\t" << "val" << "\t" << endl;
    for (int i = 0; i < size; i++) {
        cout << mat[i][0] << "\t" << mat[i][1] << "\t" << mat[i][2] << "\t" << endl;
    }
}

int SparseMat::getval(int x,int y) {
   for (int i = 0; i < size; i++) {
       if (mat[i][0] == x && mat[i][1] == y) {
           return mat[i][2];
       }
   }
   return 0;
}

int SparseMat::insert(int x, int y, int val) {
    // Check if the value to be inserted already exists
    // if exists replace with new value
    int i;
    for (i = 0; i < size; i++) {
       if (mat[i][0] == x && mat[i][1] == y) {
           mat[i][2] = val;
           return val;
       }
   }
    // If the value dosen't exist
    // Add it to the sparse matrix
    mat[size][0] = x;
    mat[size][1] = y;
    mat[size][2] = val;
    ++size;
    return val;

}

SparseMat SparseMat::transpose() {
    int x;
    SparseMat *transposed = this;
    for (int i = 0; i < size; i++) {
        x = transposed->mat[i][0];
        transposed->mat[i][0] = transposed->mat[i][1];
        transposed->mat[i][1] = x;
    }
    return *transposed;
}

SparseMat SparseMat::add( SparseMat n ) {
    int x;
    SparseMat added;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (n.getval(i,j) != 0 || getval(i,j) != 0) {
                x = getval(i,j) + n.getval(i,j);
                added.insert(i,j,x);
            }
        }
    }
    return added;
}



int main() {
    SparseMat a, b;
    SparseMat added, transposed;

    a.read();
    cout << "Matrix A" << endl;
    a.print_sparse();

    transposed = a.transpose();
    cout << "Transposed Matrix" << endl;
    transposed.print_sparse();

    b.read();
    added = a.add(b);
    cout << "Added Matrix" << endl;
    added.print_sparse();

    return 0;
}
