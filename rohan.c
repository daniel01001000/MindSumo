#include <stdio.h>
#include <math.h>

/*
* Mind Sumo question #13
* Author: Daniel Hwang
* 
*/

int main() {

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;

	int found = 0;

	while (!found) {

		if( is_perfect_sqr(b,c,d) && is_cubepow(a,b,c,d,e) ) {
			found = 1;
			printf("a = %i, b = %i, c = %i, d = %i, e = %i\n", a,b,c,d,e);
		} else {
			a++;
			b++;
			c++;
			d++;
			e++;	
		}
		
	}
	return 0;
}

/*
* is_cubepow() returns if the sum of parameters comprise a cube power
* 
*  inputs: 
*   a = number that is part of cube power
*   b = number that is part of cube power
*   c = number that is part of cube power
*   d = number that is part of cube power
*   e = number that is part of cube power
*
*  output: Returns 1 if sum of parameters are a cube power; 0 otherwise
* 
*/
int is_cubepow(int a, int b, int c, int d, int e) {

	int sum = a + b + c + d + e;
	int i;

	for ( i = 1; i < sum; i++ ) {
		if (pow(i, 3) == sum)
			return 1;
	}
	return 0;

}

/*
* is_perfect_sqr() returns if the sum of parameters comprise a cube power
* 
*  inputs: 
*   a = number that is part of perfect square
*   b = number that is part of perfect square
*   c = number that is part of perfect square
*
*  output: Returns 1 if sum of parameters are a perfect square; 0 otherwise
* 
*/

int is_perfect_sqr(int a, int b, int c) {
	int sum = a + b + c;
	int i;

	for (i = 1; i < sum; i++ ) {
		if (pow(i, 2) == sum)
			return 1;
	}
	return 0;
}