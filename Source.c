#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Step 1 ==> Enemy struct

struct Enemy {

    // All required variables

    int health;
    int armorRating;
    int expPts;
    int enemies;
};

// Step 2 ==> RandomInt function which returns random integer between given range

int RandomInt(int min, int max) {

    int range = (max - min) + 1;
    int value = rand() % range + min;

    return value;
}

// Step 3 ==>

int main(void) {
    struct Enemy {

    // All required variables

    int health;
    int armorRating;
    int expPts;
    int enemies;
};
   

    // calling srand to initialize random number generator

    srand(time(NULL));

    // Prompting user to enter number of enemies they want to create

    int numOfEnem;
  


    printf("Enter number of enemies to create: ");
    scanf("%d", &numOfEnem);

    // Creating array of enemies dynamically using calloc

   Enemy = ( Enemy * enemies); calloc(numOfEnem, sizeof(Enemy));

    // Looping from index 0 to size of array

    int sum = 0;

    for (int i = 0; i < numOfEnem; i++) {

        printf("\n\n\t----Enemy#%d----", i + 1);

        // Setting hit point(health) to a random number from 50 to 100

        enemies[i].health = RandomInt(50, 100);

        // Setting armorRating from 12 to 22

        enemies[i].armorRating = RandomInt(12, 22);

        // Setting expPts to (health * armorRating)/50

        enemies[i].expPts = (enemies[i].health * enemies[i].armorRating) / 50;

        // Adding experience pts to a sum

        sum += enemies[i].expPts;

        // Output hitpoints (health), armorRating and exp points for this array item

        printf("\nHit Points: %d", enemies[i].health);
        printf("\nArmor Rating: %d", enemies[i].armorRating);
        printf("\nExperience points: %d", enemies[i].expPts);
    }

    // Output the experience points for entire array

    printf("\n\nThe total experience points for entire array: %d", sum);

    // Freeing dynamically allocated memory

    free(enemies);

    return 0;
}