
#include <stdio.h>
#include <time.h>

#define MULTIPLIER 1103515245
#define INCREMENT 12345
#define MODULUS (1 << 31)  // 2^31

unsigned int current_seed;

unsigned int my_rand() {

  current_seed = (current_seed * MULTIPLIER + INCREMENT) % MODULUS;
  return current_seed;

}

int main() {

  // Seed the random number generator with current time
  current_seed = time(NULL);

  // Generate and print 10 random numbers
  for (int i = 0; i < 10; ++i) {

    printf("Random number: %u\n", my_rand()%45);

  }

  return 0;
  
}


