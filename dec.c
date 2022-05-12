// include this header file so we can use `printf()`
#include <stdio.h>

// every C program must implement the `main()` function
int main(int argc, char *argv[]) {
	//TODO: check for enough arguments
	if (argc == 1 || argc != 3){					// no. of arguments must be 3 including ./dec
		printf("Usage: ./dec <number> <base>\n");
		return 1;
	}
	
	// save the number in an easier-to-use variable
	char *number = argv[1];
	char *base = argv[2];

	//TODO: figure out how many characters in length
	//      the base value is (1 or 2?) (optional!)
	int x, baseLength = 0;						// initialize length of base

	for (x = 0; base[x] != '\0'; x++){			// for loop to find length of base
		baseLength++;
	}
	
	
	//TODO: figure out which base is given as a number
	int baseInt = 0;							// initialize base in numbers
	
	while(*base != '\0'){						// while loop to convert base into numbers for calculation
		baseInt *= 10;
		baseInt += *base - 48;
		base++;
	}
	

	//TODO: show an error if base is outside bounds
	if (baseInt < 2 || baseInt > 36){			// base must be more than 1 or less than 37
		printf("INVALID BASE\n");
		return 1;
	}
	


	//TODO: figure out how many characters in length
	//      the number is (optional!)
	int y, charLength = 0;						// initialize length of number

	for (y = 0; number[y] != '\0'; y++){		// for loop to find length of number 
		charLength++;
	}
	

	//TODO: calculate the decimal number of the
	//      given value 
	int result = 0, index = charLength - 1, z, power = 1;	// initialize result and power of base
	
	for (; index >= 0; index--){
		z = number[index];				// for loop iterates from last digit of number to first
		
		if (z >= 48 && z <= 57){		// if character is 0 - 9, 48 or '0' is subtracted to obtain its value
			z -= 48;
		}
		else {							// elif character is a letter, 55 is subtracted to obtain its value
			z -= 55;
		}
		if (z >= baseInt){				// check for number that could not possibly be in the given base
			printf("INVALID VALUE\n");	
			return 1;
		}
		
		result += z * power;			// equivalent to number[charLength - 1] * 1 +
		power *= baseInt;				// number[charLength - 2] * baseInt + 
										// number[charLength - 3] * (baseInt^2) + ...
	}
	

	// print the result
	printf("%d\n", result);

	// program completed successfully, return 0
	return 0;
}

// comment

