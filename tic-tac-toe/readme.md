# Tic-Tac-Toe Game in C++

This is a classic, two-player Tic-Tac-Toe game that runs in the command line. The program creates a 3x3 game board and allows two players to take turns inputting their moves until a winner is decided or the game ends in a draw.



This project was built to practice and demonstrate fundamental C++ programming concepts.

---
## Core Concepts Practiced

* **2D Arrays:** The game board is managed using a `char board[3][3]`, which is a perfect application of 2D arrays to represent grid-based data.
* **Functions:** The program is organized logically using functions to handle specific tasks like `draw_board()` and `check_win()`, promoting code reusability and readability.
* **Game Loop:** A `for` loop is used to create the main game loop, which controls the 9 possible turns of a game.
* **Conditional Logic:** `if-else` and `switch` statements are used extensively to handle player input, update the board, switch between players, and check for winning conditions.
* **User Input/Output:** The program uses `std::cout` to display the board and game state, and `std::cin` to get player moves.