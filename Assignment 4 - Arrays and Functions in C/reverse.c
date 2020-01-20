#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//260871813
//Elias Tamraz

int main(int argc, char *argv[])
{
	if (argc != 3) { 
        printf("Wrong number of arguments. Please input: ./reverse WORD1 WORD2.\n");
	exit(EXIT_FAILURE);
                       } // user did not provide exactly 2 arguments at the command line

	char *word1 = argv[1];
	char *word2 = argv[2];

        //check number of letters if they are not the same then definitly they are not reverse
	if (strlen(word1) != strlen(word2)) { 
		printf("WORD1=%s WORD2=%s – NOT REVERSE\n", word1, word2);
		exit(EXIT_SUCCESS);
	}

	int length = strlen(word1); // equals to word2 since the programs did not exit in the previous if 
	int index; 
	for (index = 0; index < length; index++) // for loop to iterate through the letters of each word (array)
	{ 
		if (word1[index] != word2[length - index - 1]) // comparing the ith char of the first word with ith char of the second word starting from the back
		{ 
			printf("WORD1=%s WORD2=%s – NOT REVERSE\n", word1, word2);
			exit(EXIT_SUCCESS);
		}
	}
	printf("WORD1=%s WORD2=%s – REVERSE\n", word1, word2); //if the program didnot exit in the for loop then they are reverse
}
