#include <stdio.h>
void printGrid(int (*grid)[5]) {
    int r, c;
    for (r = 0; r < 5; r++) {
        for (c = 0; c < 5; c++) {
            printf("%d ", grid[r][c]);
        }
        printf("\n"); }
}

int countNeighbours(int (*grid)[5], int row, int col) {
    int count = 0;
    int dr, dc, nr, nc;
    
    for (dr = -1; dr <= 1; dr++) {
        for (dc = -1; dc <= 1; dc++) {
            if (!(dr == 0 && dc == 0)) {
                nr = row + dr;
                nc = col + dc;
                
                if (nr >= 0 && nr < 5 && nc >= 0 && nc < 5) {
                    if (grid[nr][nc] & 1) {
                        count++; }
                }
            }
        }
    }
    return count;
}

void nextGeneration(int (*grid)[5]) {
    int r, c;
    
    for (r = 0; r < 5; r++) {
        for (c = 0; c < 5; c++) {
            int liveNeighbours = countNeighbours(grid, r, c);
            int currentState = grid[r][c] & 1;
            int nextState = 0;
            
            if (currentState == 1) {
                if (liveNeighbours == 2 || liveNeighbours == 3) {
                    nextState = 1;
                } else {
                    nextState = 0;
                }
            } else {
                if (liveNeighbours == 3) {
                    nextState = 1;
                } else {
                    nextState = 0;
                }
            }
            
            grid[r][c] = currentState | (nextState << 1);
        }
    }
    
    for (r = 0; r < 5; r++) {
        for (c = 0; c < 5; c++) {
            grid[r][c] >>= 1;
        }
    }
}

int main() {
    int gens;
    int grid[5][5] = {0};
    
    grid[1][2] = 1;
    grid[2][2] = 1;
    grid[3][2] = 1;
    
    printf("Enter number of generations (0-50): ");
    scanf("%d", &gens);
    
    while (gens < 0 || gens > 50) {
        printf("Invalid number\n");
        printf("Enter number of generations (0-50): ");
        scanf("%d", &gens);
    }
    
    printf("Generation 0:\n");
    printGrid(grid);
    
    int g;
    for (g = 1; g <= gens; g++) {
        nextGeneration(grid);
        printf("Generation %d:\n", g);
        printGrid(grid);
    }
    
    return 0;
}