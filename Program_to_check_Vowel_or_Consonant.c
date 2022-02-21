#include<stdio.h>
int main()
{
    char ch;
    int lowercase,uppercase;
    scanf("%c",&ch);
    lowercase=(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u');
    uppercase=(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U');
    if(lowercase||uppercase){
        printf("Vowel");}
        else
        {
            printf("Consonant");
        }
        return 0;
    }