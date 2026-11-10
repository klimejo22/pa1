#include <stdio.h>
#include <stdlib.h>

/**
 * Compares two unsigned ints (passed as pointers)
 * @return negative number (-1) if A < B, zero if A = B, positive number (1) if A > B
 */
struct dyn_array  {
    ssize_t size, capacity;
    unsigned int *data;

};

void init_array(struct dyn_array *arr) {
    arr->size = 0;
    arr->capacity = 4;
    arr->data = (unsigned int *) malloc( arr->capacity * sizeof(unsigned int) );
}

void array_append(struct dyn_array *arr, unsigned x) {
    if ( arr->size >= arr->capacity ) {
        unsigned int * tmpData;

        arr->capacity = 2 * arr->capacity;
        tmpData = (unsigned int *) realloc( arr->data, arr->capacity * sizeof(unsigned int) );
        // if ( tmpData == NULL ) {
        //     free( arr->data );
        //     printf( "Nedostatek pameti.\n" );
        //     return 2;
        // }

        arr->data = tmpData;
    }

    /* *( arrayData + arrayNr ) = x; */
    arr->data[ arr->size ] = x;
    arr->size += 1;
}
void delete_array(struct dyn_array *arr) {
    arr->size = 0;
    arr->capacity = 0;
    free(arr->data);
}
int load_array(struct dyn_array *arr) {
    while ( 1 ) {
		unsigned int x;
		if ( scanf( "%u", &x ) != 1 ) {
			return 1;
		} else if ( x == 0 ) {
			break;
		}
        array_append(arr, x);
	}

	if ( arr->size == 0 ) { 
		return 2;
	}
    return 0;
}
void print_array(struct dyn_array *arr) {
    for (int i = 0; i < arr->size; i++) {
        printf("%u\n", arr->data[i]);
    }
}
int compareUnsignedInt ( const void * ptrA, const void * ptrB ) {
	unsigned int a = *(const unsigned int *) ptrA,
	             b = *(const unsigned int *) ptrB;
	return ( a > b ) - ( b > a );
}

int main () {
	// qsort( arrayData, arrayNr, sizeof( *arrayData ), compareUnsignedInt );

	// double median = ( arrayData[ arrayNr / 2 ] + arrayData[ ( arrayNr - 1 ) / 2 ] ) / 2.0;
	// printf( "Median zadanych cisel je %g.\n", median );

	// free( arrayData );
	// return 0;

    struct dyn_array arr;
    init_array(&arr);
    int i = load_array(&arr);
    if (i > 0) {
        printf("Nespravny vstup.\n");
        return 1;
    }
    print_array(&arr);
    // med=median(arr);
    delete_array(&arr);
    return 0;
}