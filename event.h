#ifndef EVENT_H
#define EVENT_H

#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 200

typedef struct {
    char name[MAX_NAME_LENGTH];
    char frequency[MAX_NAME_LENGTH];
    char sponsor[MAX_NAME_LENGTH];
} Event;

#endif
