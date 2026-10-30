# Simple Calculator

A terminal-based interactive calculator written in C.

## Compile

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

./calculator

## Supported operations

- `0`: Quit
- `1`: Add (reads A and B, prints A + B)
- `2`: Subtract (not implemented yet)
- `3`: Multiply (not implemented yet)
- `4`: Divide (not implemented yet)

## Numeric behavior

Operands are read as decimal numbers (`double`), so both integers and decimals are accepted. Results are printed with `%g`: `10 + 25` prints `35`, and `1.5 + 2` prints `3.5`.

## Known limitations

- The menu choice must be an integer between 0 and 4. Any other integer prints `Invalid choice`.
- Non-numeric menu input (for example `x` or `hello`) is not handled and may make the program loop indefinitely.
- If an operand is not a number, `Invalid input` is printed and the program returns to the menu, but the invalid text stays in the input buffer.
- `%g` prints at most 6 significant digits, so very large or very precise results are rounded.