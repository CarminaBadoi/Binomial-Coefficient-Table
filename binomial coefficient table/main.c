#include <stdio.h>
#include <stdlib.h>

int main()
{ int m,x,maxim;


printf("What is the maximum ?\n");
scanf("%d",&maxim);


for(m=0;m<=maxim;m++){

    printf("%2d",m);
    int binom=1; // when m=0 and x = 0

    for (int x = 0; x <= m; x++) {
            if (m != 0 && x != 0)
                binom = binom * (m - x + 1) / x;
                printf("%4d", binom);

        }
        printf("\n");
        }

    return 0;
}
