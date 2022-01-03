#include <stdio.h>
#include <stdlib.h>

typedef struct studentdata{
    int num;
    char stunum[10];
    char Last_name[15];
    char First_name[10];
    int score[3];
}data;

int main(){
    printf("Function Menu\n");
    printf(" -------------\n"
           "1 - create a new file.\n"
           "2 - Open an existed file.\n"
           "3 - Insert a score data\n"
           "4 - Find a specific student data\n"
           "5 - Update a specific student data\n"
           "6 - Delete a specific student data\n"
           "7 - List all of student score data\n"
           "0 - Exit\n"
           "=>");
    char n;
    scanf(" %c ", &n);
    while(n != 0){
        switch( n ){
            case 1:
            case 2:
            case 3:
                
            case 4:
            case 5:
            case 6:
            case 7:
            case 0:
        }
    };
}
