[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-f4981d0f882b2a3f0472912d15f9806d57e124e0fc890972558857b51b24a6f9.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=9910729)
# Shut the Box, Part 1

The assignment relates to a variation of the game *Shut the Box*. In this game, there is a box that contains 9 tiles numbered 1 through 9 with all tiles in the “up” position. In each round of the game the player rolls a pair of dice, unless the sum of the numbers on the up-facing tiles totals 6 or less in which case the player rolls a single die. After rolling the dice (or die), the player chooses one, two, or three of the up-facing tiles totaling the same number as the roll of the dice to move to the “down” position. The player continues until either all the tiles are in the down position, or there is no combination of up-facing tiles that total the roll of the dice. The player’s score is the total of the up-facing tiles at the end of the game, with the goal being the lowest score possible. A perfect score is zero.

For variations of the game and rules of the variants, see [https://en.wikipedia.org/wiki/Shut_the_Box](https://en.wikipedia.org/wiki/Shut_the_Box).

There are two *objects* required to implement this game; an object to represent a collection of dice, and an object to represent the box of tiles. A first step in building a program to play this game would be to create object classes needed to support the game. A *Dice* class was completed in class and will be used in this game. You will need to build a *Box* class to represent the box of tiles.

A *Box* class for this game must support the following:

* A set of nine tiles. For each, you need to keep track of whether the tile is in the up or down position. When the box is initialized (constructor), all tiles should be in the up position.
* A method for "closing" tiles, or changing them from up-facing to down-facing. During game play, a player may choose to close one, two, or three tiles. This method should ensure that the tiles requested to be closed are, in fact, in the up position. (Suggest a *close* member function that takes three *int* parameters, and returns *bool* to indicate success of failure to close the selected tiles.)
* A method to determine the current score of the box. The score is the sum of all up-facing tiles.
* A method to return a *string* representation of the state of the box. For example, if only tiles 3 and 7 are down-facing, this method should return the string "1 2 * 4 5 6 * 8 9".

For this assignment, build a header and implementation file pair for a class called *Box* that represents the box used in the game. Part 2 of this assignment will be to complete the game, which will incorporate the class you build in part 1.

Also, write a main function that demonstrates that your *Box* class behaves as expected. A suggested approach to testing would be to use a loop in which the user is propmpted for three integers. With each input, attempt to close the tiles indicated, and report whether or not those tiles were successfully closed. Use *zero* as a tile number to close only one or two tiles. When calling your *close* method, this should be deemed successful only if the tile numbers are valid (where tile number 0 is ignored), all tile numbers given are tiles in the up position, and no two tile numbers given are the same (except, of course, for 0).
