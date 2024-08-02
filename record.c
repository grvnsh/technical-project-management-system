#include "record.h"
#include <stdlib.h>
#include <string.h>

Achievement *create_achievement() {
    Achievement *new_achievement = (Achievement *)malloc(sizeof(Achievement));
    if (new_achievement == NULL) {
        fprintf(stderr, "Memory allocation failed for Achievement\n");
        exit(1);
    }
    memset(new_achievement, 0, sizeof(Achievement));
    return new_achievement;
}

bool edit_achievement(Achievement *achievement, const char *new_title, const char *new_department, int new_year, const char *new_description) {
    // Check for null pointers
    if (!achievement) {
        return false;
    }
    // Update fields
    strncpy(achievement->title, new_title, MAX_NAME_LENGTH);
    strncpy(achievement->department, new_department, MAX_NAME_LENGTH);
    achievement->year = new_year;
    strncpy(achievement->description, new_description, MAX_DESCRIPTION_LENGTH);
    return true;
}

void delete_achievement(Achievement *achievement) {
    free(achievement);
}

Offense *create_offense() {
    Offense *new_offense = (Offense *)malloc(sizeof(Offense));
    if (new_offense == NULL) {
        fprintf(stderr, "Memory allocation failed for Offense\n");
        exit(1);
    }
    memset(new_offense, 0, sizeof(Offense));
    return new_offense;
}

bool edit_offense(Offense *offense, const char *new_title, int new_rank, int new_year, const char *new_description) {
    if (!offense) {
        return false;
    }
    strncpy(offense->title, new_title, MAX_NAME_LENGTH);
    offense->rank = new_rank;
    offense->year = new_year;
    strncpy(offense->description, new_description, MAX_DESCRIPTION_LENGTH);
    return true;
}

void delete_offense(Offense *offense) {
    free(offense);
}
