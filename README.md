# Base to Decimal Converter
This is a C program that converts a number from a different base to decimal.

## Project Specification

This program takes **1)** a number written in a different base and **2)** that base in decimal as *command line arguments* and output the decimal number. 
All bases from 2 to 36 should be able to be handled by this program. Error messages such as INVALID BASE or INVALID VALUE should be printed out if the input contains an invalid base (less than 2 or more than 36) or an invalid number of command line arguments. 

## Converting Characters to Numbers

The character `'1'` is *not the same* as the **number 1**. The numeric values that correspond to the actual characters on the screen are outlined in the manpage, they can be viewed by executing `man ascii` in the terminal. Press `q` to exit.

## Makefile

A `Makefile` is provided, simply type `make` to compile the program. You can type `make test` to run the tests seen below in the **Example Output** section. You can also type `make clean` to remove the compiled program.

## Example Output

<img width="707" alt="Screen Shot 2022-05-13 at 12 16 44 PM" src="https://user-images.githubusercontent.com/105037989/168325043-ca1f9ff1-88cf-4cb6-8315-05fc4386bc84.png">

>The dollar sign is not something you should type, it just represents the prompt in the terminal.
