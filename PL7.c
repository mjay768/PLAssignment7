#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX_SIZE 1000

int f1();
int f2();
int f3();

int main()
{
    long int item;
    f1();

    return 0;
}


int f1()
{
    char ch[MAX_SIZE];
    long int item;
    static int n;
    static long int addr;
    static int AR[MAX_SIZE];
    addr = (long int)ch;
    

    if(n<10)
    {

        printf("\nCall #%d at %x",n+1,(void *)ch);
        printf("\nAR Size       #%d is %ld",n+1,addr - (long int)ch);
        f1(n++);
    }
        


}

int f2()
{
    char ch[MAX_SIZE];
    static int n;
    static long int addr;
    static int AR[MAX_SIZE];
    addr = &AR[n] - addr;
    printf("\nCall #%d at %ld",n+1,&ch[0]);
    printf("\nAR Size       #%d is %ld",n+1,addr);
    f2(n++);
        


}
