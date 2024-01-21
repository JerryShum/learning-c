# 1.5.1 - File Copying

- using `putchar()` and `getchar()` we can make a file that copies its input to its output (essentially file copying)

- Steps:

  - read a character
  - while (character is not end-of-file indicator){
    output the character just read
    read a character
    }

```c
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

```

- c is of type int b/c it must be big enough to hold all of the chars and also EOF
- EOF = end of file

- after ./a.out , typing any character stream will be copied on the next line after pressing enter.
