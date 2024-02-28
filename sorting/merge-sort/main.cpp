#include "../print_list.cpp"

/* Merge the array */
void merge(int *list, int start, int mid, int end)
{
    /*create two arrays left l and right r */
    int size_l = mid - start + 1; /* Size of left array */
    int l[size_l]; /* left array */

    /* copy left elements to left array */
    for (int i = start, j = 0; j < size_l; i++, j++)
    {
        l[j] = list[i];
    }
    int size_r = end - mid; /* Size of right array */
    int r[size_r]; /* Right array */

    /* copy right elements to right array */
    for (int i = mid + 1, j = 0; j < size_r ; i++, j++)
    {
        r[j] = list[i];
    }
    int i = 0; /* Index for left  */
    int j = 0; /* Index for right */
    int k = start; /* Index for list */

    /* Copy left and right array to list */
    while (i < size_l && j < size_r)
    {
        if (l[i] >= r[j])
        {
            list[k] = l[i];
            i++;
        }
        else
        {
            list[k] = r[j];
            j++;
        }
        k++;
    }

    /* Copy remaing left array */
    while (i < size_l)
    {
        list[k] = l[i];
        i++;
        k++;
    }

    /* Copy remaing right array */
    while (j < size_r)
    {
        list[k] = r[j];
        j++;
        k++;
    }
}

/* Merge-Sort algorithm */
void merge_sort(int *list, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    /* Calculate Mid point of list */
    int mid = (start + end) / 2;

    merge_sort(list, start, mid);
    merge_sort(list, mid + 1, end);
    merge(list, start, mid, end);
}

int main()
{
    int array[8] = {2, 3, 1, 5, 9, 45, 3, 56};
    merge_sort(array,0,7);
    printList(array,8);
    return 0;
}