## Exercise 00: Megaphone

In this exercise, the goal is to write a program that behaves as a megaphone. The program should take one or more arguments (strings) and output them in uppercase. If no arguments are provided, the program should print a loud noise indicating feedback.

### Requirements

- **Turn-in directory:** `ex00/`
- **Files to turn in:** `Makefile`, `megaphone.cpp`
- **Forbidden functions:** None

### Behavior

When provided with a string argument:
   ```bash
   $> ./megaphone "shhhhh... I think the students are asleep..."
   SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

When provided with multiple string arguments:
    ```bash
    $> ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
    DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

### If no arguments are provided:
    ```bash
$> ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
