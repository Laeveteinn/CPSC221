
#include "guessinggame_rude.h"

int main(void) {
	srand(time(NULL));
	int rand_num = rand() % GUESS_RANGE;
	int guess_num = -1;

	printf("Number range is between 0 and %i inclusive...\nEnter your guess or -1337 to exit...\n", GUESS_RANGE);

	while (true) {
		printf("Enter your guess: ");
		scanf_s("%i", &guess_num);

		if (guess_num == CHICKEN) {
			printf("BUCK BUCK BUCK BUCK-AAAA!!!\n");
			break;
		} else if (guess_num != rand_num) {
			printf("WRONG! Your skills are inferior :D\n");
		} else {
			printf("RIGHT! How unexpected.\n");
			break;
		}
	}

	system("PAUSE");
	return 0;
}