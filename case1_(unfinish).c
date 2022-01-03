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
    char filename[50];
    char choice;
    printf("File name:");
    scanf("%[^\n]",filename);
    FILE *ptr;
    if ((ptr = fopen("filename", "rb+")) == NULL){
        if((ptr = fopen("filename","w")) == NULL){
            data student ={0, "", "",0.0};
            for(size_t i = 0 ; i<= 50 ; i++){
                fwrite( &student, sizeof(student), 1, ptr);
            }
            fclose(ptr);
            puts("a");
        }
    }
    else{
        printf("The file [%s] is existed.\n",filename);
        printf("Do you want to overwrite it? (Y/N)?");
        while(scanf("%c",&choice)=='Y');
            if(choice == 'Y'){
                if((ptr = fopen("filename","w")) == NULL){
                data student ={0, "", "",0.0};
                for(size_t i = 0 ; i<= 50 ; i++){
                    fwrite( &student, sizeof(student), 1, ptr);
                }
                fclose(ptr);
            }
            }
}
}
