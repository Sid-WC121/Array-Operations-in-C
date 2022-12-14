#include <stdio.h>

int s, arr[100], i;
void create();
void insertion_sort();
void insert();
void delete ();
void traverse();
int search();
void exit();


int main()
{
    int op;
    // do while loop for meanu driven
    do
    {
        // printing options
        printf(" \nOPTIONS \n1. Create \n2. Insertion Sort \n3. Insert \n4. Delete \n5. Traverse \n6. Search \n7. Exit");
        printf("\n\nEnter the option: ");
        // inputing option number from user
        scanf("%d", &op);
        // comparing the selected option number to invoke appropriate function
        switch (op)
        {
        case 1:
            printf("\n**Array creation initiated**\n");
            create();
            break;
        case 2:
            printf("\n**Element insertion_sort initiated**\n");
            insertion_sort();
            break;
        case 3:
            printf("\n**Element insertion initiated**\n");
            insert();
            break;
        case 4:
            printf("\n**Element deletion initiated**\n");
            delete ();
            break;
        case 5:
            printf("\n**Array traversing initiated**\n");
            traverse();
            break;
        case 6:
            printf("\n**Array search initiated**\n");
            search();
            break;
        case 7:
            printf("\n**Exiting the program**\n");
            exit(0);
        default:
            printf("\nInvalid option\n");
            break;
        }
    } while (op != 7);
    return 0;
}

void create()
{
    // accepting size of the array to be created
    printf("\nEnter the size of array to be created: ");
    scanf("%d", &s);
    // creating array of accepted size
    for (i = 0; i < s; i++)
    {
        printf("arr[%d]= ", i);
        // accepting array values
        scanf("%d", &arr[i]);
    }
}

void insertion_sort()
{
    int l, i, j;
    printf("Array before sorting is:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    for (i = 1; i < s; i++)
    {
        l = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > l)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = l;
    }
    printf("\nArray after Sorting is:\n");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insert()
{
    int pos, element;
    printf("Array before insertion is:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the position to insert: ");
    scanf("%d", &pos);
    s++;
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    if (pos > s)
    {
        printf("Invalid Input");
    }
    else
    {
        for (i = s - 1; i >= pos - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = element;
    }
    printf("Array after insertion is:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
}

void delete ()
{
    int element, i, index = -1;
    int n = 0;

    printf("Array before deletion:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element to be deleted: ");
    scanf("%d", &element);

    for (i = 0; i < s; i++)
    {
        if (arr[i] == element)
        {
            index = i;
            n = n + 1;
            printf("%d is found @ %d    \n", element, i);
        }
    }
    if (n > 1)
    {
        printf("\nEnter the index to be deleted = ");
        scanf("%d", &index);
        n = 0;
    }
    if (index != -1)
    {
        for (i = index; i < s - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    else
    {
        printf("Element %d is Not Found in the array\n", element);
    }
    s--;
    printf("\nArray after deletion:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
}
void traverse()
{
    printf("\nArray:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
}
int search()
{
    int search, i, found;
    printf("\nEnter the element to be searched: ");
    scanf("%d", &search);
    found = 0;
    for (i = 0; i < s; i++)
    {
        if (arr[i] == search)
        {
            found += 1;
            printf("\n%d is found at position %d", search, i);
            continue;
        }
    }
    if (found == 0)
    {
        printf("\n%d is not found in the array", search);
    }
    return 1;
}
