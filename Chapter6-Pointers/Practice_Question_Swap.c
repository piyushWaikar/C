
#include<stdio.h>

void swap(int a , int b);  //  Call by Value
void _swap(int *a , int *b);  // Call by References(Address) 

int main() {
    int x = 3, y = 5;
    swap(x, y);
    printf("X=%d & y=%d\n", x,y);

        _swap(&x, &y);
    printf("X=%d & y=%d\n", x,y);

    return 0;
}

// Call by Value

void swap(int a, int b) {
    int t=a;
    a = b;
    b = t;
    printf("a=%d & b=%d\n", a,b);
}


// Call by References(Address) 

void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    
}