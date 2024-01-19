# 1.1 - Getting Started

- create a program "hello.c" and compile it with `cc hello.c`
- compilation will make an **executable file** (a.out)
- typing `a.out` into the terminal will run the file

  - type `./a.out`. `./` means that you are searching in your CURRENT directory and NOT the PATH

- `#include <stdio.h>` tells the compiler to include information about the standard I/O library

```c

#include <stdio.h>

main(){
    printf("Hello, world! \n");
}

```

- sequence of characters in double quotes is called a **string constant** -> "Hello, World!" is a string constant
- `\n` is notation for the \_new line character\_
