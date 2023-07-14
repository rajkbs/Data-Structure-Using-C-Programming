#include <stdio.h>

//Structure Declaration

struct student{
    char name[25];
    int roll_no;
} s;

int main(){
    
    printf("Enter Student name : ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("\nEnter Roll Number : ");
    scanf("%d", &s.roll_no);

    printf("\n--Display--\n");

    printf("%s\n", s.name);
    printf("%d", s.roll_no);
    return 0;
}