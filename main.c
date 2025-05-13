#include <stdio.h>
#include <stdlib.h>

int counts(int *rolls, int len, int elem){
    int count = 0;
    for(int i = 0; i < len; i++){
        if(rolls[i] == elem) count++;
    }
    return count;
}

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Constants
    const int NUM_ROLLS = 100;
    const int DICE_SIDES = 6;

    int rolls[NUM_ROLLS];

    // Simulate dice rolls
    for(int i = 0; i < NUM_ROLLS; i++){
        rolls[i] = rand() % DICE_SIDES + 1;
    }

    // Count and print occurence of every dice value
    for(int i = 1; i <= DICE_SIDES; i++){
        printf("%d\n", counts(rolls, NUM_ROLLS, i));
    }

    // Calculate sum
    int sum = 0;
    for(int i = 0; i < NUM_ROLLS; i++){
        sum += rolls[i];
    }

    // Print sum
    printf("%d\n", sum);

    // Print mean
    printf("%.1f\n", (float)sum / (float)NUM_ROLLS);
    
    return 0;
}
