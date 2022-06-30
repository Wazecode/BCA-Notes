/*Add two using two different classes by the help of friend */

#include<iostream>
using namespace std;

class Mat1 {
        int matrix[3][3];

public:
        Mat1();

        void print();
        void input();

        Mat1 operator !(){
                Mat1 a;
                for(int i=0; i<3; i++){
                        for(int j=0; j<3; j++){
                                a.matrix[i][j] = matrix[j][i];
                        }
                }
                return a;
        }

};

Mat1::Mat1(){
        for(int i=0; i < 3; i++){
                for(int j=0; j<3; j++)
                        matrix[i][j] = 0;
        }
}

void Mat1::print(){
        for(int i=0; i < 3; i++){
                for(int j=0; j<3; j++)
                        cout<<matrix[i][j]<<" ";
                cout<<endl;
        }
}

void Mat1::input(){
        cout<<"Enter three numbers for first row;";
        cin>>matrix[0][0]>>matrix[0][1]>>matrix[0][2];

        cout<<"Enter three numbers for second row;";
        cin>>matrix[1][0]>>matrix[1][1]>>matrix[1][2];

        cout<<"Enter three numbers for third row;";
        cin>>matrix[2][0]>>matrix[2][1]>>matrix[2][2];
}



int main(){
        Mat1 a;
        a.input();
        int c;
        a = !a;
        a.print();

        return 0;
}

