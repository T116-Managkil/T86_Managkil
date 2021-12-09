#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    
    char input[100],cur;
    int len;
    printf("Input any numbers: ");
    scanf("%s", input);
    len = strlen(input);
    printf("The results are: ", input);
    
    for(int x = 0;x<len;x++){
        cur = input[x];
        if(cur=='0'){
            printf("Zero ");
        }
        else if(cur == '1'){
            printf("One ");
        }
        else if(cur == '2'){
            printf("Two ");
        }
        else if(cur == '3'){
            printf("Three ");
        }
        else if(cur == '4'){
            printf("Four ");
        }
        else if(cur == '5'){
            printf("Five ");
        }
        else if(cur == '6'){
            printf("Six ");
        }
        else if(cur == '7'){
            printf("Seven ");
        }
        else if(cur == '8'){
            printf("Eight ");
        }
        else if(cur == '9'){
            printf("Nine ");
        }
        else{
            printf("Invalid Input! ");
        }
    }
    getch();
    return 0;
}