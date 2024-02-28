/*  @author Premchandgat
    @brief Bubble sort algorithm */

#include "../print_list.cpp"

/* Bubble Sort algorithm */
void bubble_sort(int *list, int length)
{
    bool isNotShorted = true; /* isNotShorted remains true until array is shorted */
    while (isNotShorted)
    {
        /* set flag as shorted */
        isNotShorted = false;
        for (int i = 0; i < length - 1; i++)
        {
            /* check if previous elements is greater */
            if (list[i] > list[i + 1])
            {
                /* Set flag is unshorted */
                isNotShorted = true;
                /* swap both elemets */
                int temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[8] = {2, 3, 1, 5, 9, 45, 3, 56};
    bubble_sort(array, 8);
    printList(array, 8);
    return 0;
}