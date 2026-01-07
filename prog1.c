#include <stdio.h> // Necessary for printf()
// TODO Other includes
#include <cstdlib>
#include <ctime>


int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
    srand(time(NULL));
    int myrand = rand() % 100;

    printf("The value is %i.\n", myrand);

    if (0 <= myrand <= 4) {
        printf("Eat more beef, kick less cats");
    }
    else if (5 <= myrand <= 9) {
        printf("FRODO LIVES\n");
    }
    else {
        printf("Larn is the best roguelike\n")
    }
    printf("The value is %i.\n", myrand);

}
