#ifndef DATA_H
#define DATA_H

typedef struct DATA
{
    int i;
} *data;

/*
 *prints the data
 */
void printData(data x);

/*
 *compares the data
 *returns 0 if same, 1 in x > y, -1 if x < y
 */
int dataCmp(data x, data y);

/*
 *creates an array (size n) of the struct DATA
 *initializes the array and returns pointer to the first element
 */
data getData(int n);

/*
 *unlike getData, this returns returns data from 1 to n
 */
data getBadData(int n);

#endif
