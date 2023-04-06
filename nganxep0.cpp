#include<stdio.h>
int top = -1;
 
bool Full(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}
 
bool Empty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
 
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nda full");
    }else{
        ++top;
        stack[top] = value;
    }
}
 
void Pop(){
    if(IsEmpty() == true){
        printf("\ndang rong");
    }else{
        --top;
    }
}
 
 
int Top(int stack[]){
    return stack[top];
}
 
int Size(){
    return top + 1;
}