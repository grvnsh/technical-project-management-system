#ifndef EVENT_H
#define EVENT_H

#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 200

typedef enum {
    TODO,
    IN_PROGRESS,
    COMPLETED
} EventStatus;

struct Event {
    char name[MAX_NAME_LENGTH];
    char frequency[MAX_NAME_LENGTH];
    char sponsor[MAX_NAME_LENGTH];
    time_t start_date;
    time_t end_date;
    int priority;
    EventStatus status;
    int progress;
};

Event *create_event();
bool edit_event(Event *event, const char *new_name, const char *new_frequency, const char *new_sponsor);
void delete_event(Event *event);
void display_event(const Event *event);

#endif
