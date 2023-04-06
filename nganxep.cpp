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
    if(Full(capacity) == true){
        printf("\nda full");
    }else{
        ++top;
        stack[top] = value;
    }
}
 
void Pop(){
    if(Empty() == true){
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
int main(){
    int capacity = 3; 
    int top = -1; 
    int stack[capacity];
    
    Push(stack, 5, capacity); 
    
    printf("\nkich thuoc hien tai cua ngan xep %d", Size());
    
    Push(stack, 10, capacity);
    Push(stack, 24, capacity);
    
    printf("\n kich thuoc hien tai cua ngan xep %d", Size());
    Push(stack, 12, capacity); 

    printf("\n phan tu dang nam tren dinh cua ngan xep la %d", Top(stack));
    
   
    for(int i = 0 ; i < 3;i++)
    Pop();
    printf("\n kich thuoc hien tai cua ngan xep %d", Size());
    
   
    Pop();  
}