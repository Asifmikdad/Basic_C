#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marksEnglish;
    int marksMath;
    int total;
    printf("Enter marks in English: ");
    scanf("%d", &marksEnglish);
     printf("Enter marks in Math: ");
    scanf("%d", &marksMath);

    total = marksEnglish + marksMath;

    printf("Total marks is %d", total);

    return 0;
}
