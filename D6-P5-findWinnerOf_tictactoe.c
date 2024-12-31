#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
bool isWinning(char** matrix, int matrixsize){
    for(int i=0; i<matrixsize; i++){
        if(matrix[i][0] != ' ' && matrix[i][0]==matrix[i][1] && matrix[i][1]==matrix[i][2] ){
            return true;
        }
        if(matrix[0][i]!=' ' && matrix[0][i]==matrix[1][i] && matrix[1][i]==matrix[2][i]){
            return true;
        }
        if(matrix[0][0]!=' ' && matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2]){
            return true;
        }
        if(matrix[0][2]!=' ' && matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0]){
            return true;
        }
    }
    return false;
}
char* tictactoe(int** moves, int movesSize, int* movesColSize) {
    char** matrix=(char*)malloc(3*sizeof(char));
    for(int i=0; i<3; i++){
        matrix[i]=(char*)malloc(3*sizeof(char));
        for(int j=0; j<3; j++){
            matrix[i][j]=' ';
        }
    }

    for(int i=0; i<movesSize; i++){
        if(i%2 == 0)
            matrix[moves[i][0]][moves[i][1]] = 'X';
        else
             matrix[moves[i][0]][moves[i][1]] = 'O';
        
        if(isWinning(matrix,3)){
            for(int k=0; k<3; k++){
                free(matrix[k]);
            }
            free(matrix);
            if(i%2==0)
                return "A";
            else
                return "B";
        }
    }
    if(movesSize >= 9){
        for(int k=0; k<3; k++){
                free(matrix[k]);
            }
            free(matrix);
        return "Draw";
    }
    else{ 
        for(int k=0; k<3; k++){
                free(matrix[k]);
            }
            free(matrix);
        return "Pending";

    }
}
int main() {
    // Test Case 1
    int moves1[][2] = {{0, 0}, {1, 1}, {0, 1}, {2, 2}, {0, 2}};
    int movesSize1 = 5;
    int movesColSize1 = 2;

    int** movesArray1 = (int**)malloc(movesSize1 * sizeof(int*));
    for (int i = 0; i < movesSize1; i++) {
        movesArray1[i] = (int*)malloc(2 * sizeof(int));
        movesArray1[i][0] = moves1[i][0];
        movesArray1[i][1] = moves1[i][1];
    }

    printf("Test Case 1 Result: %s\n", tictactoe(movesArray1, movesSize1, &movesColSize1));

    for (int i = 0; i < movesSize1; i++) {
        free(movesArray1[i]);
    }
    free(movesArray1);

    // Test Case 2
    int moves2[][2] = {{0, 0}, {1, 1}, {2, 0}, {1, 0}, {1, 2}, {2, 1}, {0, 2}, {0, 1}, {2, 2}};
    int movesSize2 = 9;
    int movesColSize2 = 2;

    int** movesArray2 = (int**)malloc(movesSize2 * sizeof(int*));
    for (int i = 0; i < movesSize2; i++) {
        movesArray2[i] = (int*)malloc(2 * sizeof(int));
        movesArray2[i][0] = moves2[i][0];
        movesArray2[i][1] = moves2[i][1];
    }

    printf("Test Case 2 Result: %s\n", tictactoe(movesArray2, movesSize2, &movesColSize2));

    for (int i = 0; i < movesSize2; i++) {
        free(movesArray2[i]);
    }
    free(movesArray2);
    return 0;
}
