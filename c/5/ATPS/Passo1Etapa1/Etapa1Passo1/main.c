#include <stdio.h>
#include <stdlib.h>

int inteiros_unif (seed, low, high){
    long int *seed; int low; int high;

    int unif_ret;
    long int m,a,b,c,k;
    double value_0_1;

    m = 2147483647;
    a = 16807;
    b = 127773;
    c = 2836;

    k = *seed/b;
    *seed = a * (*seed % b) -k * c;
    if (*seed <0) {
        *seed = *seed +m;
        value_0_1 = (double) *seed/m;
        unif_ret = low+value_0_1*(high-low+1);
        return (unif_ret);
    }
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
