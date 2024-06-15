
// when we have to skip something then we use 'continue' statement .


// Print all numbers from 1 to 10 except for 6 .

#include<stdio.h>
int main() {

    for(int i=1 ; i<=10 ; i++) {

        if(i==6) {    // skip 6 value 
            continue;
        }

        printf("%d", i);
    }

 
    return 0 ;
}