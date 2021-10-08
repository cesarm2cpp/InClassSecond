#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "square.h"
#include <stdbool.h>
 
int main(){
    int square[3][3];
    int total = 0; //Count of squares that are generated
    while (1)
    {        
        total++;
        int value[10] = {0};
        srand(time(0)+total); 
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int n = rand()%9 + 1;
                while (value[n])
                {
                    n = rand()%9 + 1;
                }
                square[i][j] = n;
                value[n] = 1;
            }
        }
        
        bool squared = squareConfig(square);
        if(squared == true){
            break;
        }
        
    }
    printf("Total number of squares generated and tested:%d\n",total);
    printf("-------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("|");
        for (int j = 0; j < 3; j++)
        {
            printf("%d|",square[i][j]);
        }
        printf("\n");
        printf("-------\n");
    }
    return 0;
}