/*
 * Created on Wed Feb 06 2019 
 *
 * Written by Danny Nguyen
 */

#include <stdio.h>
#include <stdlib.h>

//solves the tower of hanoi 
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{ 
    if (n == 1){ 
        printf("\n Move disk 1 from pole %c to pole %c", from_rod, to_rod); 
        return; 
    } 
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
    printf("\n Move disk %d from pole %c to pole %c", n, from_rod, to_rod); 
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 
} 

int main(int argc, char * argv[]){
    int n = atoi(argv[1]);
    towerOfHanoi(n, 'A', 'C', 'B');
}