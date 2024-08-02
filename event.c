#include "event.h"
#include <stdlib.h>
#include <string.h>

Event *create_event() {
    Event *new_event = (Event *)malloc(sizeof(Event));
    if (new_event == NULL) {
        fprintf(stderr, "Memory allocation failed for Event\n");
        exit(1);
    }
    memset(new_event, 0, sizeof(Event));
    return new_event;
}

bool edit_event(Event *event, const char *new_name, const char *new_frequency, const char *new_sponsor) {
    if (!event) {
        return false;
    }
    strncpy(event->name, new_name, MAX_NAME_LENGTH);
    strncpy(event->frequency, new_frequency, MAX_NAME_LENGTH);
    strncpy(event->sponsor, new_sponsor, MAX_NAME_LENGTH);
    return true;
}

void delete_event(Event *event) {
    free(event);
}

void display_event(const Event *event) {
    if (!event) {
        printf("Event is null\n");
        return;
    }

    printf("Event Name: %s\n", event->name);
    printf("Frequency: %s\n", event->frequency);
    printf("Sponsor: %s\n", event->sponsor);
}
