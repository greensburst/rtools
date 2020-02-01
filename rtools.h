#ifndef __RTOOLS_H__
#define __RTOOLS_H__

void Initial();

// low <= x <= high
int GenerateRandomInteger(int low, int high);

// low <= x <= high
double GenerateRandomDouble(double low, double high);

/*
 *  type = -1
 *  return one of 'a' ~ 'z'
 * 
 *  type = 1
 *  return one of 'A' ~ 'Z'
 * 
 *  typr = 0
 *  return one of 'a'~'z' or 'A' ~ 'Z'
 */   
char GenerateRandomLetter(int type);

/*
 *  returned string's elements is in elements[].
 *  minlength <= strlen(elements) <= maxLength
 */
char* GenerateRandomString(char* elements, int minLength, int maxLength);

__attribute((constructor)) void before_main() {
    Initial();
}

#endif