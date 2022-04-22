/*
Write a program that prints an integer number, a floating number, a double number and a character.
*/
//Uses of Data Type.(Keyword,Format Specifier,Variable)
#include<stdio.h>
int main()
{
    int num1 = 10;
    float num2 = 10.50;
    double num3 = 10.511111;
    char ch = 'a';

    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %f\n", num2);
    printf("Number 3 = %lf\n", num3);
    printf("Character = %c", ch);
    return 0;
}
