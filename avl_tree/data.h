#ifndef DATA_H
#define DATA_H

typedef struct DATA
{
    int i;
} *data;

void printdata(data x);

int datacmp(data x, data y);

#endif