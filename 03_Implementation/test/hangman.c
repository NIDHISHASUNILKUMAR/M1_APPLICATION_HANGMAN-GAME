#include"hangman.h"

int main(void) {
    char hangmanInput[100], tempWord[100];
    char hangmanOutput[100];
    int wrongTry = 6, matchFound = 0;

    int counter = 0, position = 0, winner, length, i;
    char alphabetFromUser;

    system("cls");
    puts("\n\n Enter any word in small case and hit >>ENTER<<");
    printf("\n\n\t Enter HERE ==>  ");
    gets(hangmanInput);
    puts("\n\n Now give the COMPUTER to your friend and see if he/she can CRACK it!!!");
    puts("\n\n\tHIT >>ENTER<<");
    getchar();
    length = strlen(hangmanInput);

    system("cls");

    puts("\n\n !!!!!!!!!!!!!!!!!!!Welcome to the HANGMAN GAME!!!!!!!!!!!!!!!!!\n\n\n");
    puts("\n\n You will get 5 chances to guess the right word");
    puts("\n\n So help the Man and get...set...GO..!!");
	
    getchar();

    printf("\n\n\tHIT >>ENTER<< ");

    getchar();

    system("cls");

    puts("\n\t||===== ");
    puts("\n\t||    | ");
    puts("\n\t||      ");
    puts("\n\t||      ");
    printf("\n\t||      ");
    puts("\n\t||      ");

    printf("\n\n     The word has %d alphabets \n\n", length);
    for (i = 0; i < length; i++) {
        hangmanOutput[i] = '_';
        hangmanOutput[length] = '\0';
    }

    for (i = 0; i < length; i++) {
        printf(" %c", hangmanOutput[i]);

    }
    while (wrongTry != 0) {
        matchFound = 0;
        puts("\n\n   enter any alphabet from a to z and please use small case!!");
        printf("\n\n\t Enter HERE ==> ");

        fflush(stdin);
		alphabetFromUser = getchar();
        if (alphabetFromUser < 'a' || alphabetFromUser > 'z') {
            system("cls");
            puts("\n\n\t Wrong input TRY AGAIN ");
            matchFound = 2;
		}
        fflush(stdin);
        if (matchFound != 2) {
            for (counter = 0; counter < length; counter++) {
                if (alphabetFromUser == hangmanInput[counter]) {
                    matchFound = 1;
                }
            }

            if (matchFound == 0) {
                printf("\n\t :( You have %d tries left ", --wrongTry);
                getchar();
                showHangman(wrongTry);
                getchar();
            } else {
                for (counter = 0; counter < length; counter++) {
                    matchFound = 0;
                    if (alphabetFromUser == hangmanInput[counter]) {
                        position = counter;
                        matchFound = 1;
                    } //end of if
                    if (matchFound == 1) {
                        for (i = 0; i < length; i++) {
                            if (i == position) {
                                hangmanOutput[i] = alphabetFromUser;
                            } else if (hangmanOutput[i] >= 'a' && hangmanOutput[i] <= 'z') {
                                continue;
                            } else {
                                hangmanOutput[i] = '_';
                            }
                        }
                        tempWord[position] = alphabetFromUser;
                        tempWord[length] = '\0';
                        winner = strcmp(tempWord, hangmanInput);

                        if (winner == 0) {
                            puts("\n\n\t \t YAHOO!!!!! You are the WINNER !!!!!");
                            printf("\n\n\t The Word was %s ", hangmanInput);
                            puts("\n\n\n\n\t\tEASY HUH???\n\n");
                            getchar();
                            return 0;
                        }
                    }
                }
            }
        }

        puts("\n\n\t");
        for (i = 0; i < length; i++) {
            printf(" %c", hangmanOutput[i]);
        }

        getchar();
    }

    if (wrongTry <= 0) {
        printf("\n\n\t The Word was %s ", hangmanInput);
        puts("\n\n\t The man is dead you IDIOT!!!!!");
        puts("\n\n\t Better luck next!!!");

    }
    getchar();
    return 0;
} //end of main();

void showHangman(int choice) {

    switch (choice) {

    case 0:
        system("cls");
        puts("\t||===== ");
        puts("\t||    | ");
        printf("\t||   %cO/", '\\');
        puts("\n\t||    | ");
        printf("\t||   / %c", '\\');
        puts("\n\t||      ");
        break;
    case 1:
        system("cls");
        puts("\t||===== ");
        puts("\t||    | ");
        printf("\t||   %cO/", '\\');
        puts("\n\t||    | ");
        printf("\t||     %c", '\\');
        puts("\n\t||      ");
        break;
    case 2:
        system("cls");
        puts("\t||===== ");
        puts("\t||    | ");
        printf("\t||   %cO/", '\\');
        puts("\n\t||    | ");
        puts("\t||      ");
        puts("\t||      ");
        break;
    case 3:
        system("cls");
        puts("\t||===== ");
        puts("\t||    | ");
        printf("\t||   %cO/", '\\');
        puts("\n\t||      ");
        puts("\t||      ");
        puts("\t||      ");
        break;
    case 4:
        system("cls");
        puts("\t||===== ");
        puts("\t||    | ");
        printf("\t||   %cO ", '\\');
        puts("\n\t||      ");
        puts("\t||      ");
        puts("\t||      ");
        break;
    case 5:
        system("cls");
        puts("\t||===== ");
        puts("\t||    | ");
        puts("\t||    O ");
        puts("\t||      ");
        puts("\t||      ");
        puts("\t||      ");
        break;
    }
    return;
}

