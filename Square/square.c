#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int squareConfig(int square[3][3]){
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < 3; i++){
        sum = sum + square[i][0]; //Check 1st row
    }

    for (int i = 1; i < 3; i++){
        temp = 0;
        for (int j = 0; j < 3; j++){
            temp = temp + square[i][j]; //Check 2nd and 3rd row
        }
        if (temp != sum){
            return false;
        }  
    }

    for (int i = 0; i < 3; i++){
        temp = 0;
        for (int j = 0; j < 3; j++){
            temp = temp + square[j][i]; //check all
        }
        if (temp != sum){
            return false;
        }  
    }
    temp = 0;
    for (int i = 0; i < 3; i++){
        temp = temp + square[i][i]; //Cheking diagonal
    }
    if (temp != sum){
        return false;
    }

    temp = square[0][2] + square[1][1] + square[2][0];    
    if (temp != sum){
        return false;
    }

    return true;
    
}