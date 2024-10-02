#include <iostream>

int scale_by(int num, const int factor);    // forward declaration

int main(){
    const int factor = 3;
    int num = 5;

    std::cout << num << " scaled by " << factor << " : " << scale_by(num, factor) << "\n"; 
    return 0;
}

int scale_by(int num, const int factor){
    // factor = 10;         Compile time error as we are trying to modify const value
    return num * factor;
}

