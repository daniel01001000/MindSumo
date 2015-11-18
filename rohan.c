#include <stdio.h>
#include <math.h>


int main() {

	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;

	int found = 0;

	while (!found) {

		if( is_perfect_sqrt(b,c,d) && is_cubert(a,b,c,d,e) ) {
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


int is_cubert(int a, int b, int c, int d, int e) {

	int sum = a + b + c + d + e;
	int i;

	for ( i = 1; i < sum; i++ ) {
		if (pow(i, 3) == sum)
			return 1;
	}
	return 0;

}

int is_perfect_sqrt(int a, int b, int c) {
	int sum = a + b + c;
	int i;

	for (i = 1; i < sum; i++ ) {
		if (pow(i, 2) == sum)
			return 1;
	}
	return 0;
}