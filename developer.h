#ifndef DEVELOPER_H
#define DEVELOPER_H

#define MAX_TASKS 10
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int weight;
    char deadline[MAX_NAME_LENGTH];
    char status[MAX_NAME_LENGTH];
} Task;

typedef struct {
    char name[MAX_NAME_LENGTH];
    char title[MAX_NAME_LENGTH];
    char expertise[MAX_NAME_LENGTH];
    Task tasks[MAX_TASKS];
    int task_count;
} Dev;

void assign_task(Dev* dev, Task task);
void complete_task(Dev* dev, const char* task_name);
void transfer_task(Dev* from_dev, Dev* to_dev, const char* task_name);
void remind_task(Task* task);
void mark_as_late(Task* task);
void display_developer_tasks(const Dev* dev);

#endif
