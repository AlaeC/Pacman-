# Pacman-
Pacman project with c language and SDL2


# Pacman Project Documentation

## Overview

**Pacman** is a game project inspired by classic arcade experiences. This documentation aims to provide an understanding of the main functions, logic, and file structure, as well as explain the graphical and AI components for the ghost behavior.

---

## Main Function and Logic

### Main Function

The **main function** is the entry point for the Pacman game. It handles the initialization, game loop, and final cleanup.

1. **Initialization:**

   - Load assets (sprites, sounds, fonts).
   - Set up the game window and frame rate.
   - Initialize game variables (player position, score, ghost states).

2. **Game Loop:**

   - Handle user input (movement, pause, restart).
   - Update game objects (Pacman, ghosts, pellets, and power-ups).
   - Check for collisions (Pacman vs. pellets, ghosts, walls).
   - Render the updated game state.

3. **Cleanup:**

   - Free any dynamically allocated resources.
   - Close the game window.

---

## Scores File

The **scores file** manages player scores and high scores. It typically functions as follows:

- **Saving Scores:**

  - After each game, append the player’s score to a file (e.g., `scores.txt`).
  - Include the player’s name and score in a standardized format.

- **Loading Scores:**

  - On game startup, load the high scores into memory.
  - Sort the scores and display the top 10.

- **Resetting Scores:**

  - Optional functionality to clear all scores from the file.

---

## Graphics and Logic Files

The project will include two separate C files:

1. **Graphics File - `graphic.c`:**

   - Explanation of sprite sheets and rendering.
   - How animation frames are handled.

2. **Logic File - `logic.c`:**

   - Ghost movement patterns (random, chase, scatter, and frightened modes).
   - State transitions and timers.
   - Collision detection with Pacman and walls.

---

## Conclusion

This documentation provides a structured overview of the Pacman project. With the main game logic and scores management explained, and separate files dedicated to graphics and ghost AI, developers and contributors can easily understand and expand the game.

Let me know if you want to adjust any part of the structure, add diagrams, or dive deeper into specific logic!

