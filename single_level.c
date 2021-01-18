#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct directory {
    char dir_name[15], fname[15][15];
    int fcnt;
} dir;

int main() {
    
    int i, ch;
    char f[30];

    dir.fcnt = 0;

    printf("Enter directory name: ");
    scanf("%s", dir.dir_name);

    while(1) {
        printf("\n\n1.Create file\t2.Delete file\t3.Display file\n4.Search file\t5.Exit\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: printf("\nEnter name of file: ");
                    scanf("%s", dir.fname[dir.fcnt]);
                    dir.fcnt++;
            
            case 2: printf("\nEnter name of file: ");
                    scanf("%s", f);
                    for(i=0; i<dir.fcnt; i++) {
                        if(strcmp(f, &dir.dir_name[i])==0) {
                            printf("The file is deleted.");
                            strcpy(dir.fname[i], dir.fname[dir.fcnt-1]);
                            break;
                        }
                    }
                    if (i==dir.fcnt) 
                        printf("File %s not found", f);
                    
                    else 
                        dir.fcnt--;
                    break;

            case 3: printf("\nEnter name of file: ");
                    scanf("%s", f);
                    for(i=0; i<dir.fcnt; i++) {
                        if(strcmp(f, dir.fname[i])==0) {
                            printf("File %s is found", f);
                            break;
                        }
                    }
                    if (i==dir.fcnt) 
                        printf("File not found");
                    break;
            
            case 4: printf("\nEnter name of file: ");
                    scanf("%s", f);
                    if(dir.fcnt==0) 
                        printf("\n Directory is empty");
                    else {
                        printf("\nFiles are: ");
                        for(i=0; i<dir.fcnt; i++) {
                        printf("\t%s", dir.fname[i]);
                    }
                    }
                    break;
            
            default: exit(0);
                        
        }
    }
    
    


}

