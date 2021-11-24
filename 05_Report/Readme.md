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
