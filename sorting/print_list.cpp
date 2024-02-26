#include <stdio.h>
void printList(int *list, int length){
    for(int index =0 ; index < length; index++)
        printf("%d,", list[index]);
}