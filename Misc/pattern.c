//Q)C program to print the plus star pattern series
//				+
//				+
//				+
//				+
//		+ + + + + + + + +
//				+
//				+
//				+
//				+

#include <stdio.h>

int main()
{
    int i, j, N;
    printf("Enter N: ");
    scanf("%d", &N);
    for(i=1; i<=(N * 2 ); i++)
    {
        if(i == N)
        {
            for(j=1; j<=(N*2); j++)
            {
               printf("+ ");
            }
        }
        else
        {
            for(j=1; j<=N-1; j++)
            {
                printf("  ");
            }
            printf("+");
        }
        printf("\n");
    }

    return 0;
}
