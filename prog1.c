#include <stdio.h> // Necessary for printf()
// TODO Other includes
#include <stdlib.h>
#include <time.h>


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
    srand(time(NULL));
    int myrand = rand() % 11;


    if (myrand >= 0 && myrand <= 4) {
        printf("Eat more beef, kick less cats\n");
    }
    else if (myrand >= 5 && myrand <= 9) {
        printf("FRODO LIVES\n");
    }
    else {
        printf("Larn is the best roguelike\n");
    }
    printf("The random number was: %i.\n", myrand);

    return 0;

}
