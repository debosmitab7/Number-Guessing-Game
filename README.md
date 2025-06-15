# Number Guessing Game (C++)

A simple terminal-based game where the user tries to guess a randomly generated number between 1 and 100. The program provides hints like **Hot**, **Cold**, or **Right** based on how close the guess is.

---

## Features

- Random number generation between 1 and 100
- Feedback after each guess:
  - **Hot**: You're close (within 10 numbers)
  - **Cold**: You're far away
  - **Right**: You guessed it!
- Infinite attempts until the correct number is guessed

---

## Built With

- C++
- Standard Library (`<cstdlib>`, `<ctime>`, `<iostream>`)

---

## How to Run

### Using g++

```bash
g++ guess_number.cpp -o guess_game
./guess_game
