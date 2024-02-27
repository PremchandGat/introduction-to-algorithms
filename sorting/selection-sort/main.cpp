/*  @author Premchandgat
    @brief Selection sort algorithm */

#include "../print_list.cpp"

/* Selection sort algorithm */
void selectionSort(int *list, int size)
{
    for (int i = 0; i < size -1 ; i++)
    {
        int smallestVal = list[i];
        int j = i;
        int index = i;
        while (j < size)
        {
            if (smallestVal > list[j])
            {
                smallestVal = list[j];
                index = j;
            }
            j++;
        }

        list[index] = list[i];
        list[i] = smallestVal;
    }
}

int main()
{
    int array[8] = {2, 3, 1, 5, 9, 45, 3, 56};
    selectionSort(array, 8);
    printList(array, 8);
}