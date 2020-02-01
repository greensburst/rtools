#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void Initial() {
	srand((int)time(0));
}

int GenerateRandomInteger(int low, int high) {
    double r;
	if(low > high) {
        printf("GenerateRandomNumber: Make sure low <= high.\n");
		exit(1);
	}

	r = (double)rand() / ((double)RAND_MAX + 1.0);
	return low + (int)(r *(high - low + 1));
}

double GenerateRandomDouble(double low, double high) {
    double r;
	if(low > high) {
		printf("GenerateRandomDouble: Make sure low <= high.\n");
		exit(2);
	}

	r = (double)rand() / (double)RAND_MAX;
	return low + r *(high - low);
}

char GenerateRandomLetter(int type) {
    switch(type) {
    case -1:
        return GenerateRandomInteger(97,122);
        break;
    case 0:
        if(GenerateRandomInteger(0,1)) {
            GenerateRandomInteger(97,122);
            break;
        }
    case 1:
        return GenerateRandomInteger(97,122) - 32;
        break;
    default:
        printf("GenerateRandomLetter: Make sure type is in {-1,0,1}.\n");
        exit(3);
    }   
}

char* GenerateRandomString(char* elements, int minLength, int maxLength) {
    if(strlen(elements) == 0) {
        printf("GenerateRandomString: Make sure elements length > 0.\n");
        exit(4);
    }
    if(minLength > maxLength) {
        printf("GenerateRandomString: Make sure minLength <= maxLength.\n");
        exit(4);
    }
    int elementsLength = strlen(elements);
    int rStringLength  = GenerateRandomInteger(minLength,maxLength);
    char* rString = (char*)malloc(sizeof(char) * rStringLength);
    for(int i = 0; i < rStringLength; i++) {
        *(rString + i) = *(elements + GenerateRandomInteger(0, elementsLength - 1));
    }
    return rString;
}