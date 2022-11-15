#include <stdio.h>
#include <stdlib.h>

void main(){
    //variable declarations
    int tCases;
    char testString[100];
    FILE *input;

    //Prompt user to enter number of cases
    printf("Enter number of test cases: ");
    scanf("%d", &tCases);

    //read file containing steps detials 
    if((input = fopen("/home/faruq/Desktop/CSC235Assignments/CSC235Assignment2/adam.txt", "r")) == NULL){
        printf("Program couldn't access file");

        //exit program
        exit(1);
    }

    for(int i = 0; i<=tCases; i++){
        fscanf(input, "%s", testString);
        int stepCount = 0;

        for(int j = 0; j < 100; j++ ) {
            if(testString[j] == 'U'){
                stepCount++;
            }else if(testString[j] == 'D'){
                printf("Total number of steps Adam took in test case %d before falling is %d\n", i, stepCount);
                j =100;
            }
        }
    }
    }

