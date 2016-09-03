#include <stdio.h>
#include <string.h>
#include "romancalc.h"

int RomanCalculator(char *first, char* operator, char* second, char* result) {

	if( first == NULL )
		return ROMAN_CALCULATOR_MISSING_FIRST_TERM;

	if( second == NULL )
		return ROMAN_CALCULATOR_MISSING_SECOND_TERM;

	if( operator == NULL )
		return ROMAN_CALCULATOR_MISSING_OPERATOR;

	if( result == NULL )
		return ROMAN_CALCULATOR_MISSING_OUTPUT_BUFFER;

	if( strcmp(operator, "+") && strcmp(operator, "-" ) ) {
		return ROMAN_CALCULATOR_INVALID_OPERATOR;
	}

	strcpy(result, "II");

	return ROMAN_CALCULATOR_FAILURE;
}
