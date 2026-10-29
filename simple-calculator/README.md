# Simple Calculator

A terminal-based interactive calculator written in C.

## Compile

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run

./calculator

## Supported operations

- `0`: Quit
- `1`: Add (not implemented yet)
- `2`: Subtract (not implemented yet)
- `3`: Multiply (not implemented yet)
- `4`: Divide (not implemented yet)

## Numeric behavior

Not defined yet (operations are not implemented).

## Known limitations

- Only the menu choice is validated: it must be an integer between 0 and 4.
- Non-numeric input (for example `x` or `hello`) is not handled and may make the program loop indefinitely.