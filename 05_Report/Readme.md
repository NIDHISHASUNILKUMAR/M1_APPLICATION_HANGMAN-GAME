# REPORT:

# Requirement:

# Introduction:
This aim of this project is to create a popular game called hangman. Our objective is to create the same experience you get when you play using pen and paper or maybe better.

# Research:
![HANGMAN](https://user-images.githubusercontent.com/94303567/143068226-109c8c2b-9094-4657-914b-45ed2ac0a881.jpeg)

Hangman is an old school favorite, a word game where the goal is simply to find the missing word or words.
You will be presented with a number of blank spaces representing the missing letters you need to find.
Though the origins of the game are unknown, a variant is mentioned in a book of children's games assembled by Alice Gomme in 1894 called Birds, Beasts, and Fishes. This version lacks the image of a hanged man, instead relying on keeping score as to the number of attempts it took each player to fill in the blanks.
The word to guess is represented by a row of dashes representing each letter of the word. In most variants, proper nouns, such as names, places, and brands, are not allowed. Slang words, sometimes referred to as informal or shortened words, are also not allowed. If the guessing player suggests a letter which occurs in the word, the other player writes it in all its correct positions. If the suggested letter does not occur in the word, the other player draws one element of a hanged stick figure as a tally mark.

# Cost estimation:
Estimated cost = hours needed to build an app * cost per hour to build an app.

# Formula:
The user gets 5 opportunities to correctly guess the word. Each time user correctly identifies the character in the word, the blanks are replaced with the character, otherwise the hangman moves one step closer to getting hanged.

# 4W:
## Where:
It can be palyed in system.
## When: 
Whenever the user wants to relax by playing a game.
## Who :
Anyone two people who wants to enjoy by playing a simple game.
## Why:
it is a fair choosing method between two people.

## How :
Player 1 inputs a word hidden to user who has to guess the word. After the word is typed in, the computer is passed to the Player 2. From there player 2 starts guessing the characters of the word.

# Outcome:
1) The user gets the correct word before he runs out of chances
2) The user runs out of guesses before he finds the whole word

# Swot Analysis:
## Strength 
Intresting and fun to play this game for hours and hours.Memory power can be increased.Focus & concentration. 
## Weakness 
This is not a modern game.
## Oppurtunity
This game will enrich us by new words that are not aware of.
## Threat 
 No software is currently available for updation.
 
 # Requirements:
## Low level Requirement:
* Needs two player to play this game.
* Memory: 1 GB

## High level Requirement:
* CPU: Intel Core i5-4400E.
* OS: Windows 7.
 
# Architecture:

## Behavioral Design:

![image](https://user-images.githubusercontent.com/94303567/143231905-fb7ea077-a8ab-44b4-89dc-190a99eb993e.png)

*user1 chooses a word to guess.

*user1 sets the number of wrong guesses.

*user2 tries to guess the word by entering letters.

*if user2 enters too many wrong letters then user2 has lost the game.

*if user2 has entered all the right letters then user2 has won the game.

## Structural design:

![structuraldiagram](https://user-images.githubusercontent.com/94303567/143232866-a5e32012-0a62-4c12-852e-2e92dbe8f983.jpg)

# Source code:

#include<stdio.h>

#include<string.h>

#include<stdlib.h>

void showHangman(int);

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


# Test Plan And Output:

## LOW LEVEL TEST PLAN
ID       |Description                                                  |Expected output     |Actual output    |Type of test
---------|-------------------------------------------------------------|---------------------|-----------------|------------
L_01|Open the app|PASSED|SUCCESS|Requirement
L_02|Secret word hidden from player2|HIDDEN|SUCCESS|Scenario
L_03|Player2 inputs word|PASSED|SUCCESS|Boundary

## HIGH LEVEL TEST PLAN
ID       |Description                                                  |Expected output     |Actual output    |Type of test
---------|-------------------------------------------------------------|---------------------|-----------------|------------
H_01|Show current state of guessed text|Shows output with only charecters identified by payer 2|Shows output with only charecters identified by payer 2|Requirement
H_02|Show current state of hangman on wrong guess|Shows HANGMAN diagram|Shows HANGMAN diagram|Scenario
H_03|Player types non alphabet|Re-reads input|Re-reads input|Boundary





