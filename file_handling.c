#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *f1;
    char c;
    char A[20] = "DSA";
    int t;
    f1 = fopen("subjects.txt", "a");
    printf("File opened\n");
    printf("Enter Subject and Time : ");
    fscanf(stdin,"%s %d ",&A,&t);
    fprintf(f1,"%s : %d hours\n",A,t);
    fclose(f1);
    return 0;
}