void main() {
    int i=15,j,*p,*q;
    p = &i;
    *p=20;
    j=2 * (*p);
    q=&i;
    *p=*q-1;
    q=&j;
    *p=*q-1;

    int x, y;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    //a
    printf("i = %d, j = %d, p = %d, q = %d\n", i, j, *p, *q);
    //b
    printf("i = %d, j = %d, x = %d, y = %d\n", i, j, x, y);
    
    return 0;

// answer A:
// i = 39, j = 40, p = 39, q = 40

// answer B:
// i = 19, j = 38, x = 4, y = 4;
}


