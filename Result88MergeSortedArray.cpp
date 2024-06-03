#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;

    while (p1 >= 0 && p2 >= 1)
    { // Note the correction to '&&' instead of '&'
        if (nums1[p1] > nums2[p2])
        {
            nums1[p] = nums1[p1];
            p1 -= 1;
        }
        else
        {
            nums1[p] = nums2[p2];
            p2 -= 1;
        }
        p -= 1;
    }

    // As long as there are elements in nums2 that haven't been copied.
    while (p2 >= 0)
    {
        nums1[p] = nums2[p2];
        p2 -= 1;
        p -= 1;
    }

    // Include remaining elements from nums1 if there are any
    while (p1 >= 0)
    {
        nums1[p] = nums1[p1];
        p1 -= 1;
        p -= 1;
    }
}

int main()
{
    int nums1[6] = {1, 2, 3, 0, 0, 0}; // The last three spaces are for nums2's elements
    int nums2[3] = {2, 5, 6};
    int m = 3, n = 3;

    merge(nums1, 6, m, nums2, 3, n);

    printf("Merged array: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", nums1[i]);
    }

    return 0;
}
