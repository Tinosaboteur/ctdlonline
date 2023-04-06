#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void push(int value)
{
    if (rear == MAX_SIZE - 1)
    {
        printf("Hang doi day!\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("da them phan tu %d veo hang doi.\n", value);
    }
}

void pop()
{
    if (front == -1 || front > rear)
    {
        printf("Hang doi rong!\n");
    }
    else
    {
        printf("Phan tu %d dd duoc loai bo khoi hang doi.\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Hang doi rong!\n");
    }
    else
    {
        printf("Cac phan tu trong hang doi là: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}