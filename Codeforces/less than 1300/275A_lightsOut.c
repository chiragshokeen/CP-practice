#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, j, arr[3][3], tmp[3][3];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            arr[i][j] = 1;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &tmp[i][j]);
            if (tmp[i][j] % 2 == 1){
                if (arr[i][j]) arr[i][j] = 0; else arr[i][j] = 1;
                if (i != 0)
                    if (arr[i-1][j]) arr[i-1][j] = 0; else arr[i-1][j] = 1;
                if (i != 2)
                    if (arr[i+1][j]) arr[i+1][j] = 0; else arr[i+1][j] = 1;
                if (j != 0)
                    if (arr[i][j-1]) arr[i][j-1] = 0; else arr[i][j-1] = 1;
                if (j != 2)
                    if (arr[i][j+1]) arr[i][j+1] = 0; else arr[i][j+1] = 1;
            }
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}