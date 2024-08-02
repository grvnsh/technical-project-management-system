#include "event.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

void update_status(Event *event, EventStatus new_status) {
    if (!event) {
        fprintf(stderr, "Error: Event is null\n");
        return;
    }

    event->status = new_status;
}

char *status_to_string(EventStatus status) {
    switch (status) {
        case TODO:
            return "To Do";
        case IN_PROGRESS:
            return "In Progress";
        case COMPLETED:
            return "Completed";
        default:
            return "Unknown";
    }
}

int get_event_duration(const Event *event) {
    if (!event) {
        fprintf(stderr, "Error: Event is null\n");
        return -1; // Indicate error
    }
    time_t duration = event->end_date - event->start_date;
    return (int)duration; // Convert to seconds
}

bool is_event_overdue(const Event *event) {
    if (!event) {
        fprintf(stderr, "Error: Event is null\n");
        return false;
    }
    time_t current_time = time(NULL);
    return current_time > event->end_date;
}

char *format_duration(int seconds) {
    static char buffer[64]; // Static buffer for efficiency
    time_t duration = (time_t)seconds;
    // Break down seconds into days, hours, minutes, and seconds
    int days = duration / (60 * 60 * 24);
    duration %= (60 * 60 * 24);
    int hours = duration / (60 * 60);
    duration %= (60 * 60);
    int minutes = duration / 60;
    int seconds_remaining = duration % 60;
    if (days > 0) {
        snprintf(buffer, sizeof(buffer), "%dd %dh %dm %ds", days, hours, minutes, seconds_remaining);
    } else if (hours > 0) {
        snprintf(buffer, sizeof(buffer), "%dh %dm %ds", hours, minutes, seconds_remaining);
    } else if (minutes > 0) {
        snprintf(buffer, sizeof(buffer), "%dm %ds", minutes, seconds_remaining);
    } else {
        snprintf(buffer, sizeof(buffer), "%ds", seconds_remaining);
    }

    return buffer;
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
