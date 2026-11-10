#include <stdio.h>
#include <windows.h>

int main(){
    // for loop to print numbers from 100 to 5 in reverse order
    // for loop = repeat some code a limited number of times
    // for (start; stop; steps)
    //     (initialization; condition; increment/decrement)

    int i;
    for(i=100; i>=50; i-=5){
        Sleep(1000); // sleep for 1000 milliseconds
        printf("%d\n", i);
    }
    printf("Done!\n");


    return 0;
}