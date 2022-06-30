/*Function Overload for finding areas of different shapes*/
#include<iostream>
using namespace std;

float area(float r){
        return 3.14*r*r;
}

int area(int a, int b){
        return a*b;
}

int area(int a, int b, int c){
        return a*b*c;
}

int main() {

        float r;
        cout<<"Enter the radius:";
        cin>>r;
        cout<<"the area is:"<<area(r)<<endl;

        int a, b;
        cout<<"Enter the sides of rectangle:";
        cin>>a>>b;
        cout<<"The area is:"<<area(a,b)<<endl;

        int c;
        cout<<"Enter the sides of Cuboid:";
        cin>>a>>b>>c;
        cout<<"The area is:"<<area(a,b,c)<<endl;
        
        return 0;
}

