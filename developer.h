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
