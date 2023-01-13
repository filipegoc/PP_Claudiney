#include <stdio.h>

void main()
{
    int x, y, *px = &x, *py = &y;
    if(px > py){
        printf("%d", px);
    }
    else{
        printf("%d", py);
    }
}
