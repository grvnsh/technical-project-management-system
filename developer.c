#include <stdio.h>
#include <string.h>

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

void assign_task(Dev* dev, Task task) {
    if (dev->task_count < MAX_TASKS) {
        dev->tasks[dev->task_count++] = task;
        printf("Task '%s' assigned to %s\n", task.name, dev->name);
    } else {
        printf("Task list full for %s\n", dev->name);
    }
}

void complete_task(Dev* dev, const char* task_name) {
    for (int i = 0; i < dev->task_count; ++i) {
        if (strcmp(dev->tasks[i].name, task_name) == 0) {
            strcpy(dev->tasks[i].status, "completed");
            printf("Task '%s' completed by %s\n", task_name, dev->name);
            return;
        }
    }
    printf("Task '%s' not found for %s\n", task_name, dev->name);
}

void transfer_task(Dev* from_dev, Dev* to_dev, const char* task_name) {
    for (int i = 0; i < from_dev->task_count; ++i) {
        if (strcmp(from_dev->tasks[i].name, task_name) == 0) {
            if (to_dev->task_count < MAX_TASKS) {
                to_dev->tasks[to_dev->task_count++] = from_dev->tasks[i];
                for (int j = i; j < from_dev->task_count - 1; ++j) {
                    from_dev->tasks[j] = from_dev->tasks[j + 1];
                }
                from_dev->task_count--;
                printf("Task '%s' transferred from %s to %s\n", task_name, from_dev->name, to_dev->name);
            } else {
                printf("Task list full for %s\n", to_dev->name);
            }
            return;
        }
    }
    printf("Task '%s' not found for %s\n", task_name, from_dev->name);
}

void remind_task(Task* task) {
    printf("Reminder: Task '%s' deadline is approaching\n", task->name);
}

void mark_as_late(Task* task) {
    strcpy(task->status, "late");
    printf("Task '%s' is late\n", task->name);
}

int main() {
    Dev dev1 = {"Gurvansh Gill", "Project Manager", "Management", {}, 0};
    Dev dev2 = {"Aaryan Goyal", "Software Engineer", "Development", {}, 0};

    Task task1 = {"Develop Feature X", 5, "2024-08-01", "pending"};
    Task task2 = {"Test Feature Y", 3, "2024-08-05", "pending"};

    assign_task(&dev1, task1);
    assign_task(&dev1, task2);

    complete_task(&dev1, "Develop Feature X");
    transfer_task(&dev1, &dev2, "Test Feature Y");

    remind_task(&task2);
    mark_as_late(&task2);

    return 0;
}
