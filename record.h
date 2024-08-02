#ifndef RECORD_H
#define RECORD_H

#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 200

typedef struct {
    char title[MAX_NAME_LENGTH];
    char department[MAX_NAME_LENGTH];
    int year;
    char description[MAX_DESCRIPTION_LENGTH];
} Achievement;

typedef struct {
    char title[MAX_NAME_LENGTH];
    int rank;
    int year;
    char description[MAX_DESCRIPTION_LENGTH];
} Offense;

#endif
