#include <stdio.h>

/*Copy input to out: 1st version*/

main(){
    int c;

    c = getchar();

    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}