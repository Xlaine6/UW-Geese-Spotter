# GeeseSpotter

GeeseSpotter is a C++ implementation of a Minesweeper-like game where the player must navigate a field while avoiding hidden geese.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [How to Play](#how-to-play)
- [Project Structure](#project-structure)
- [Contributing](#contributing)

## Overview

In GeeseSpotter, players must reveal fields on a grid without disturbing hidden geese. The game is won when all non-goose fields are revealed. If a goose is disturbed, the game ends.

## Features

- Customizable grid dimensions (up to 60x20)
- Adjustable number of geese
- Mark suspicious fields
- Show/reveal fields
- Restart game option

## Requirements

- C++ compiler (supporting C++11 or later)
- Standard C++ libraries

## Compilation

To compile the game, use the following command in your terminal:

```
g++ -std=c++11 geesespotter.cpp geesespotter_lib.cpp -o geesespotter
```

This will create an executable named `geesespotter`.

## How to Play

1. Run the compiled executable:
   ```
   ./geesespotter
   ```

2. Enter the desired grid dimensions and number of geese when prompted.

3. Use the following commands during gameplay:
   - `S`: Show/reveal a field
   - `M`: Mark/unmark a field
   - `R`: Restart the game
   - `Q`: Quit the game

4. When revealing a field, enter the x and y coordinates when prompted.

5. The game ends when you either reveal all non-goose fields (win) or disturb a goose (lose).

## Project Structure

The project consists of four main files:

1. `geesespotter.h`: Header file containing function declarations for the game logic.
2. `geesespotter.cpp`: Implementation of the game logic functions.
3. `geesespotter_lib.h`: Header file for the game's library functions.
4. `geesespotter_lib.cpp`: Implementation of the game's library functions and main game loop.

### Key Functions

- `create_board`: Initializes the game board.
- `print_board`: Displays the current state of the board.
- `mark`: Marks or unmarks a field.
- `reveal`: Reveals a field and its surroundings if empty.
- `compute_neighbours`: Calculates the number of adjacent geese for each field.
- `is_game_won`: Checks if the game has been won.

## Contributing

Contributions to improve the game are welcome. Please feel free to fork the repository, make changes, and submit pull requests. Some ideas for improvements:

- Add a graphical user interface
- Implement difficulty levels
- Add a scoring system
- Create a leaderboard
