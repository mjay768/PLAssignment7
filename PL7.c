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
    //f1();
    //f2();//
    f3();

    return 0;
}


int f1()
{
    char ch[MAX_SIZE];
    long int item;
    static int n;
    static long int addr;
    static int AR[MAX_SIZE];
    long int size=0;
    size = addr - (long int)ch;
    addr = (long int)ch;

    if(n<10)
    {

        printf("\nCall #%d at 0000000000%X",n+1,(void *)ch);
        printf("\nAR Size       #%d is %ld",n+1,size);
        f1(n++);
    }



}

int f2()
{
    char ch[MAX_SIZE];
    long int item;
    static int n;
    static long int addr;
    static int AR[MAX_SIZE];
    long int size = addr - (long int)ch;
    addr = (long int)ch;
    printf("\nCall #%d at 000000000%X",n+1,(void *)ch);
    printf("\nAR Size       #%d is %ld",n+1,size);
    printf("\nStack size    #%d	is   %ld",n+1,size*(n+1));	
    f2(n++);

}

int f3()
{
    unsigned char *ch = malloc(sizeof(char) * MAX_SIZE);
    char c = sizeof(ch);
    long int item;
    static int n;
    static long int addr;
    long int size = addr - (long int)ch;
    addr = (long int)ch;


    if(n<10)
    {

        printf("\nCall #%d at 0000000000%X",n+1,ch);
        printf("\nAR Size       #%d is %ld",n+1,size);
        f1(n++);
    }

    free(ch);

}
