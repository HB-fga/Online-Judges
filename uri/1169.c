#include <stdio.h>

int main() {

    int n;
    int squares;
    unsigned long long int grains;

    scanf("%d", &n);

    while(n--)
    {
        grains = 2;
        scanf("%d", &squares);

        if(squares == 64)
        {
            printf("1537228672809129 kg\n");
            continue;
        }

        squares--;
        while(squares--)
            grains = grains * 2;

        printf("%llu kg\n", grains/12000);
    }

    return 0;
}