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

Achievement *create_achievement();
bool edit_achievement(Achievement *achievement, const char *new_title, const char *new_department, int new_year, const char *new_description);
void delete_achievement(Achievement *achievement);

Offense *create_offense();
bool edit_offense(Offense *offense, const char *new_title, int new_rank, int new_year, const char *new_description);
void delete_offense(Offense *offense);

#endif
