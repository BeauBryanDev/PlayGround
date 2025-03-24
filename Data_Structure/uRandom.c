
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/* function to generate and return random numbers */
void getSecureRandom(int *array, size_t size){
    int fd = open("/dev/urandom", O_RDONLY);

    if (fd == -1) {
        
        perror("open");
        exit(EXIT_FAILURE);
    }

    if (read(fd, array, sizeof(int) * size) == -1) {
        perror("read");
        close(fd);
        exit(EXIT_FAILURE);
    }

    close(fd);

    // Constrain the values to the range [0, 99]
    for (size_t i = 0; i < size; ++i) {

        array[i] = array[i] % 100;
    }
}

/* main function to call above defined function */
int main() {
    int randomNumbers[10];
    getSecureRandom(randomNumbers, 10);

    for (int i = 0; i < 10; i++) {
        printf("randomNumbers[%d] = %d\n", i, randomNumbers[i]);
    }

    return 0;
}
