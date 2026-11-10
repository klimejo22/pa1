#include <stdio.h>
#include <stdlib.h>

/**
 * Compares two unsigned ints (passed as pointers)
 * @return negative number (-1) if A < B, zero if A = B, positive number (1) if A > B
 */
int compareUnsignedInt ( const void * ptrA, const void * ptrB ) {
	unsigned int a = *(const unsigned int *) ptrA,
	             b = *(const unsigned int *) ptrB;
	return ( a > b ) - ( b > a );
}

int main () {
	size_t arrayNr = 0, arrayMax = 4;
	unsigned int * arrayData = (unsigned int *) malloc( arrayMax * sizeof(unsigned int) );

	while ( 1 ) {
		unsigned int x;
		if ( scanf( "%u", &x ) != 1 ) {
			free( arrayData );
			printf( "Nespravny vstup.\n" );
			return 1;
		} else if ( x == 0 ) {
			break;
		}

		if ( arrayNr >= arrayMax ) {
			unsigned int * tmpData;

			arrayMax = 2 * arrayMax;
			tmpData = (unsigned int *) realloc( arrayData, arrayMax * sizeof(unsigned int) );
			if ( tmpData == nullptr ) {
				free( arrayData );
				printf( "Nedostatek pameti.\n" );
				return 2;
			}

			arrayData = tmpData;
		}

		/* *( arrayData + arrayNr ) = x; */
		arrayData[ arrayNr ] = x;
		arrayNr += 1;
	}

	if ( arrayNr == 0 ) {
		free( arrayData );
		printf( "Nespravny vstup.\n" );
		return 3;
	}

	qsort( arrayData, arrayNr, sizeof( *arrayData ), compareUnsignedInt );

	double median = ( arrayData[ arrayNr / 2 ] + arrayData[ ( arrayNr - 1 ) / 2 ] ) / 2.0;
	printf( "Median zadanych cisel je %g.\n", median );

	free( arrayData );
	return 0;
}