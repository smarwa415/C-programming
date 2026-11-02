//single line comment
//3D array 
/*multiline comment
Author:marwa socrates makongo
Reg NO.: BCS-05-0047/2025
Date:30/10/2026
Description: 3D array multiple branches
Version:
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int chain[3][5][10];
    int occupied = 0;

    srand((unsigned)time(NULL));

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;  // 0 = empty, 1 = occupied
                occupied += chain[branch][floor][room];
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", occupied);
    return 0;
}