# C Programming Exercises

A collection of three individual C programming exercises developed as part of the Fundamentals of Computer Programming course at the University of Tehran.

## Overview

This repository contains three separate programs written in C:

1. Tarzan path simulation
2. Sleep pattern analysis
3. Athlete performance analysis

These exercises focus on problem decomposition, functions, conditional statements, loops, arrays, strings, input processing, and modular programming.

## Exercise 1: Tarzan Path Simulation

This program simulates Tarzan's movement through a jungle path containing different types of cells:

- `S` — starting position
- `F` — Tarzan's friend
- `H` — hole
- `T` — trap
- `G` — normal ground

The program tracks Tarzan's position, energy, and remaining lives while processing movement commands.

### Available Commands

- `R` — move one position to the right
- `L` — move one position to the left
- `T` — jump two positions to the right
- `K` — jump two positions to the left
- `Q` — quit the program

## Exercise 2: Sleep Pattern Analysis

This program analyzes a student's sleep data over multiple nights.

For each night, the sleeping and waking times are entered in the following format:

```text
HHMM-HHMM
```

The program calculates:

- Total sleep time
- Average sleep time
- Number of low-sleep nights
- Number of irregular nights

A night is considered low-sleep when its duration is less than six hours.

## Exercise 3: Athlete Performance Analysis

This program analyzes an athlete's performance over several training sessions.

For each session, the program receives:

- Running time
- Number of successful exercises
- Exercise difficulty

The final performance is classified as:

- `Improving`
- `Declining`
- `Stable`

## Project Structure

```text
c-programming-exercises/
│
├── tarzan-simulation/
│   ├── q1.c
│   ├── tarzan.c
│   └── tarzan.h
│
├── sleep-analysis/
│   ├── q2.c
│   ├── sleep.c
│   └── sleep.h
│
├── athlete-performance-analysis/
│   └── q3.c
│
└── README.md
```

## Compilation

### Tarzan Simulation

```bash
gcc tarzan-simulation/q1.c tarzan-simulation/tarzan.c -o tarzan
```

### Sleep Analysis

```bash
gcc sleep-analysis/q2.c sleep-analysis/sleep.c -o sleep_analysis
```

### Athlete Performance Analysis

```bash
gcc athlete-performance-analysis/q3.c -o athlete_analysis
```

## Programming Concepts

- C programming
- Functions and header files
- Arrays and strings
- Conditional statements
- Loops
- Input processing
- Time calculations
- State management
- Modular programming
- Clean code organization

## Technologies

- C
- Visual Studio Code
- Command-line interface

## Author

**Tara Jahanshahi**

Computer Engineering Student  
University of Tehran
