/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class ArrayUtility{
    public:
    static void intToDouble(int source[], double dest[], int size);
    static void doubleToInt(double source[], int dest[], int size);
};

void ArrayUtility::intToDouble(int x[], double y[], int size){
    for(int i=0; i<size; i++){
        y[i]=(double)x[i];
    }
}

void ArrayUtility::doubleToInt(double y[], int x[], int size){
    for(int i=0; i<size; i++){
        x[i]=(int)y[i];
    }
}
int main(){
    int x[] = {1,2,3,4,5};
    double y[5];
    double z[] = {9.9, 8.8, 7.7, 6.6, 5.5};
    
    ArrayUtility::intToDouble(x,y,5);
    for(int i=0; i<5; i++){
        cout << y[i] << ' ';
    }
    cout << endl;
    
    ArrayUtility::doubleToInt(z,x,5);
    for(int i=0; i<5; i++){
        cout << x[i] << ' ';
    }
    cout << endl;
    return 0;
}


