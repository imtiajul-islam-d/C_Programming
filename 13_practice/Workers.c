#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);
    float one_worker = M1 * D;
    int expected = one_worker / M2;
    printf("%d", expected);
    return 0;
}
