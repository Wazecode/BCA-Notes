/*Add two using two different classes by the help of friend */

#include<iostream>
using namespace std;

class Mat1 {
        int matrix[3][3];

public:
        Mat1();

        void print();
        void input();

        friend class Mat2;
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

class Mat2 {
        int matrix[3][3];
public:
        Mat2();

        void print();
        void input();
        void add(Mat1 &a);
};

Mat2::Mat2(){
        for(int i=0; i < 3; i++){
                for(int j=0; j<3; j++)
                        matrix[i][j] = 0;
        }
}

void Mat2::print(){
        for(int i=0; i < 3; i++){
                for(int j=0; j<3; j++)
                        cout<<matrix[i][j]<<" ";
                cout<<endl;
        }
}

void Mat2::input(){
        cout<<"Enter three numbers for first row;";
        cin>>matrix[0][0]>>matrix[0][1]>>matrix[0][2];

        cout<<"Enter three numbers for second row;";
        cin>>matrix[1][0]>>matrix[1][1]>>matrix[1][2];

        cout<<"Enter three numbers for third row;";
        cin>>matrix[2][0]>>matrix[2][1]>>matrix[2][2];
}

void Mat2::add(Mat1 &a){
         for(int i=0; i < 3; i++){
                for(int j=0; j<3; j++)
                        cout<<matrix[i][j] + a.matrix[i][j] <<" ";
                cout<<endl;
        }
}

int main(){
        cout<<"Matrix 1"<<endl;
        Mat1 a;
        a.input();
        cout<<"Matrix 2"<<endl;
        Mat2 b;
        b.input();
        b.add(a);

        return 0;
}

