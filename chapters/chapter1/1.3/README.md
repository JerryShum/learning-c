# 1.3 - The For Statement

```c
#include <stdio.h>

main(){
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
```

- fahr = 0, initializing fahr to 0
- fahr <= 300, the loop condition, aslong as fahr is <= 300, it will loop
- fahr + 20, loop increment, after every loop fahr will increment by 20
