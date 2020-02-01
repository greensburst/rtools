# rtools

### function 1
```C
    int x =  GenerateRandomInteger(int low, int high);
    //x >= low and x <= high
```

### function 2
```C
    double x = GenerateRandomDouble(double low, double high);
    //x >= low and x <= high
```

### function 3
```C
    char x = GenerateRandomAlphabet(int type);
    /*
     *  when type == -1:
     *      x is a random lower case letter 'a' - 'z'
     *  when type == 1:
     *      x is a random upper case letter 'A' - 'Z'
     *  when type == 0:
     *      x is a random letter 'a' - 'z' or 'A' - 'Z'
     */
```

### function 4
```C
    char* x = GenerateRandomString(char* elements, int minLength, int maxLength);
    /*
     *  any element of the x will in the elements
     *  and the length of the x will in [minlength,maxlength](minlength <= len(x) <= maxlength)
     */
```