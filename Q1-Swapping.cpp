/*swappping values using pointer and reference*/

#include<iostream>

using namespace std;

void pointerswap(int *a, int* b);
void refernceswap(int &a, int &b);

int main(){
  int a,b;
  cout<<"Enter Two numbers:";
  cin>>a>>b;
  cout<<"Swapping using pointer"<<endl;
  cout<<"Before Swapping"<<endl;
  cout<<"a = "<<a<<" b = "<<b<<endl;
  pointerswap(&a,&b);
  cout<<"After Swapping"<<endl;
  cout<<"a = "<<a<<" b = "<<b<<endl;

  cout<<"Swapping using pointer"<<endl;
  cout<<"Before Swapping"<<endl;
  cout<<"a = "<<a<<" b = "<<b<<endl;
  refernceswap(a,b);
  cout<<"After Swapping"<<endl;
  cout<<"a = "<<a<<" b = "<<b<<endl;

  return 0;
}


void pointerswap(int *a, int* b){
        int c;
        c = *a;
        *a = *b;
        *b = c;
}


void refernceswap(int &a, int &b){
        int c;
        c = a;
        a = b;
        b = c;
}
