#include <stdio.h>
#include <cstdlib> 
#include <iostream> 
#include <cmath> 


// void foo(int width, int arr[][width]) { 
//     int x = 3;
//     int y = 3;
//     arr[x][y] = 15;
// }

void foo2(int* arr, int d1) {
    *(arr+d1*3+3) = 10;
    printf("value inside function = %d\n", *(arr+d1*3+3)); 
}    

int main() {
    int width = 5;
    int arr[4*width];
    foo2(arr, width);
    printf("Array: %d\n", arr[18]);
    return 0;
}
