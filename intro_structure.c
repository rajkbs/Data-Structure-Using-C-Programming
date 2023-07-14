#include <stdio.h>

//Structure Declaration

struct student{
    char name[25];
    int roll_no;
};

int main(){
    struct student s;

    printf("Enter Student name : ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("\nEnter Roll Number : ");
    scanf("%d", &s.roll_no);

    printf("\n--Display--\n");

    printf("%s\n", s.name);
    printf("%d", s.roll_no);
    return 0;
}

O/P: 
Enter Student name: Raj Kumar
Enter Roll Number: 1234
--Display--
Raj Kumar
1234
