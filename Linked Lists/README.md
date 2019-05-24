# Day 1

## Storage of Variables

Local variables - Stack Memory 
Global variables - Heap Memory 
Static variables - 


Pointer Arithmetic - 

## C Lang

1. struct
1. Memory Allocation
    1. malloc
    1. calloc
    1. realloc
    1. free
1.  

# Day 2

## Format Specifiers  in C

1. %i vs %d

    https://stackoverflow.com/questions/1893490/what-is-the-difference-between-conversion-specifiers-i-and-d-in-formatted-io-f

1. %g 

1. %e 

:warning: Study all format specifers

## Input Hacks

```c

int len = 0;
for(int i=0; ;i++) 
{
    len = scanf("%d", &a[i]);
    if(len == -1) 
    {
        break;
    }
}
```