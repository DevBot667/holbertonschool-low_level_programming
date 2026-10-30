# Simple Calculator

A terminal-based interactive calculator written in C.

## Compile

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## Run

```
./calculator
```

The program displays a menu, then asks for a choice in a loop until `0` is entered.

## Supported operations

- `0`: Quit
- `1`: Add (reads A and B, prints A + B)
- `2`: Subtract (reads A and B, prints A - B)
- `3`: Multiply (reads A and B, prints A * B)
- `4`: Divide (reads A and B, prints A / B; prints `Error: division by zero` if B is 0)

## Numeric behavior

The calculator uses decimal numbers (`double`) for all operations, so both integers and decimals are accepted. Results are printed with `%g`: `10 + 25` prints `35`, `10 - 25` prints `-15`, `7 * 6` prints `42`, and `10 / 4` prints `2.5`. Division is a real division, not an integer division.

## Input handling

- The menu choice must be an integer between 0 and 4. Anything else (a number out of range or non-numeric text such as `x`) prints `Invalid choice` and the program asks again.
- If an operand is not a number, `Invalid number` is printed and the same operand is asked again.
- After each read, the rest of the input line is discarded with `getchar()`, so invalid text never stays in the input buffer and the program never loops on the same token.
- If the input ends (EOF, for example with Ctrl+D), the program prints `Bye!` and exits.

## Known limitations

- Each value must be typed on its own line: anything typed after the first value on the same line is discarded.
- `%g` prints at most 6 significant digits, so very large or very precise results are rounded.