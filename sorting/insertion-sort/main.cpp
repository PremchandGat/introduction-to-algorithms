/*  @author Premchandgat
    @brief Insertion sort algorithm */

#include "../print_list.cpp"

/* Insertion sort algorithm */
void insertionSort(int *list, int size){
    for(int i = 1 ; i < size ; i++){
        int key = list[i];
        int j = i - 1;
        while(j >= 0 && key  < list[j] ){
            list[j+1] = list[j];
            j = j-1;
        }
        list[j+1] = key;
    }
}

int main(){
    int array[8] = {2,3,1,5,9,45,3,56};
    insertionSort(array , 8);
    printList(array, 8);
}