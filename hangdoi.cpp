
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
        printf("Da them phan tu %d vao hang doi.\n", value);
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
        printf("Phan tu %d da duoc loai bo khoi hang doi.\n", queue[front]);
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
int main()
{
    int n, giatri;
    display();
    printf("nhap so phan tu muon them");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        printf("Nhap gia tri muon them vao hang doi: ");
        scanf("%d", &giatri);
        push(giatri);
    }
    printf("hang doi ban dau la ");
    display();
    pop();
    display();
}