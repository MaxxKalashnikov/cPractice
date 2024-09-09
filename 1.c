#include <stdio.h>
#include <string.h>

struct phone {
    char fname[15];
    char sname[20];
    char puh[25];
};

int main(void) {
    struct phone person1[4];
    struct phone person2[4];
    int i, j;
    char rand[4];
    char hisFn[20];
    char hisLn[25];

    printf("Enter first name:");
    scanf("%s", hisFn);
    printf("Enter last name:");
    scanf("%s", hisLn);

    FILE *read = fopen("phonedir.txt", "r");
    for (i = 0; i < 4; i++) {
        if (i == 0) {
            fscanf(read, "%s", rand);
        } else {
            fscanf(read, "%s %s %s\n", person1[i].fname, person1[i].sname, person1[i].puh);
        }
    }
    fclose(read);

    FILE *write = fopen("phonedir.txt", "w");
    for (i = 0; i < 4; i++) {
        int value1 = strcmp(person1[i].fname, hisFn);
        int value2 = strcmp(person1[i].sname, hisLn);
        if (value1 != 0 || value2 != 0) {
            fprintf(write, "%s %s %s\n", person1[i].fname, person1[i].sname, person1[i].puh);
        }
    }
    fclose(write);
    printf("Data removed from the directory.");
    return 0;
}


    // printf("\nSuccessfully saved the data.\n\nPrinting the list...");

    // FILE *read = fopen("phonedir.txt", "r");
    // struct phone person[6];
    // char rand[10];

    // for(i = 0; i < 50; i++){
    //     if(i == 0){
	// 		fscanf(read, "%s", &rand);
	// 	}else{
    //         fscanf(read, "%s %s %s", &person[i].fname, &person[i].sname, &person[i].puh);
    //     }
    // }

    // for(i = 1; i < 6; i++){
    //     printf("%s %s %s\n", &person[i].fname, &person[i].sname, &person[i].puh);
    // }

    // fclose(read);
