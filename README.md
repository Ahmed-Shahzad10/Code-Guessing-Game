

# Secret Binary Code Guessing Game in C++

Welcome to the Secret Binary Code Guessing Game! This fun and interactive program aims to identify a secret binary code of length `n` using the minimum number of queries. Dive into the details below to learn more about the project.

## Problem Statement

The goal of this program is to identify a secret binary code of length `n` using the minimum number of queries. The user has a secret code composed of `n` bits (each bit is either '0' or '1'). The program attempts to determine this secret code by iteratively guessing and refining its guesses based on feedback from the user.

## Objectives

1. **Input the Length of the Code**: The user inputs the length of the secret binary code (n).
2. **Initial Guess and Feedback**:
    - The program makes an initial guess, which is a binary string of length `n` composed entirely of '0's and asks the user how many bits in this guess match the secret code.
3. **Iterative Refinement**:
    - The program iterates through each bit position of the guess.
    - For each bit, it toggles the bit (changes '0' to '1' or '1' to '0').
    - It then asks the user how many bits match the secret code after the toggle.
    - Based on the feedback, it decides whether to keep the toggle or revert it.
    - This process continues until all bits have been examined.
4. **Output the Secret Code**:
    - Once all bits are correctly identified, the program outputs the secret code by saying "Hurray! The code is:" and terminates.

## Code Description

This program consists of the following functions:

- `Game()`: Controls the main game loop, displaying the menu and handling user choices. It contains the main algorithm `identifyCode()` which is a guessing algorithm.
- `delay(int milliseconds)`: Creates a delay for the specified number of milliseconds using the clock() function. It comes after we include the `ctime` library. It is used for `showLoadingBar()` to display loading with a delay (30 milliseconds) effect, which makes it look like a smooth transition.
- `showLoadingBar()`: Displays a loading bar with a delay to simulate loading time.
- `displayMenu()`: Displays the main menu to the user. It gives 2 choices: 1. Play, 2. Exit. Play displays the game while exit asks the user if he/she really wants to quit. It also has an "R function" which means "Raw literal String" that displays the string as it is written in the code without the need for `\n`, `\t`. That's how we printed a huge CODE GUESS in our game.
- `identifyCode(int n)`: Identifies the secret binary code of length `n` through iterative guesses and user feedback.


## Sample Output Screenshots

- Game name:
  
![image](https://github.com/Ahmed-Shahzad10/Code-Guessing-Game/assets/92481567/f5a874eb-191e-445c-8624-93b51e763558)

- Menu:

![image](https://github.com/Ahmed-Shahzad10/Code-Guessing-Game/assets/92481567/db769ebe-8944-4ec0-8244-f9f6291eb8ca)

- Loading Bar:

![image](https://github.com/Ahmed-Shahzad10/Code-Guessing-Game/assets/92481567/56bbff0f-eed5-44ef-97fa-e47b46e49561)

- The Gameplay:

![image](https://github.com/Ahmed-Shahzad10/Code-Guessing-Game/assets/92481567/c4c03f6d-07fe-4a67-b237-cfbc965c41d2)

- Exit Choice:

![image](https://github.com/Ahmed-Shahzad10/Code-Guessing-Game/assets/92481567/dd0996ea-51e4-49d1-aa70-bc483fa9754a)


## Conclusion

The program successfully identifies a secret binary code by iteratively guessing and refining its guesses based on user feedback. The use of a loading bar adds a visual element to improve user experience. The code is structured to allow easy user interaction through a menu system, and it efficiently narrows down the correct binary code through a process of elimination and verification. Overall, this leads to a fun game for the user and tests the intelligence of the algorithm to guess correctly. While this is a small game, the guessing algorithm can be used to make bigger games like the famous “Akinator”.

