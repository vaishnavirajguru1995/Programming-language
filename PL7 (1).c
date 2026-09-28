/*
Program(7)-> Write a C program to swap two numbers using a temporary variable.
Solution(1)-> User Defined Values
*/

#include<stdio.h>
int main()

{
    int a,b,temp;

    a=111;
    b=222;
    printf("\n Before Swapping:");
    printf("\n a = %d,b= %d",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("\n After swapping:");
    printf("\n a = %d,b= %d",a,b);

    return 0;
}