#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX_SIZE 1000

struct Stack{

    int top;
    unsigned limit;
    char *arr;
};

struct stack* createStack(unsigned limit){
    struct Stack* stack = (struct Stack*)malloc(sizeof(sizeof(struct Stack)));

    stack -> limit = limit;
    stack -> top = -1;
    stack -> arr = (char*) malloc(sizeof(char *));
    return stack;
}
 
int isFull(struct Stack* stack)
{
    return (stack ->top == stack -> limit -1);
}

int isEmpty(struct Stack* stack)
{
    return (stack -> top == -1);
}

int f1();
int f2();
int f3();

struct Stack* stack;

int main()
{
           

    f1();

    return 0;
}


int f1()
{
    char ch[MAX_SIZE];
    static int n;
    static long int addr;
    static int AR[MAX_SIZE];
    addr = &AR[n] - addr;
    

    if(n<10)
    {

        printf("\nCall #%d at %ld",n+1,&ch[0]);
        printf("\nAR Size       #%d is %ld",n+1,addr);
        f1(n++);
    }
        


}
