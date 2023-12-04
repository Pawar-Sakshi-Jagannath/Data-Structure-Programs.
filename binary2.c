#include<stdio.h>

int main()
{
    int i, arr[10], key, low, high, mid;
    printf("Enter 10 elements (in ascending order): ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be search: ");
    scanf("%d", &key);
    low = 0;
    high = 9;
    mid = (low+high)/2;
    while(low <= high)
    {
        if(arr[mid]<key)
            low = mid+1;
        else if(arr[mid]==key)
        {
            printf("\nThe number, %d found at Position %d", key, mid+1);
            break;
        }
        else
            high = mid-1;
        mid = (low+high)/2;
    }
    if(low>high)
        printf("\nThe number, %d is not found in given Array", key);
    return 0;
}
