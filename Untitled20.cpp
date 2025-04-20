#include <stdio.h>

void find_max_min(int arr[], int size, int *max_value, int *max_index, int *min_value, int *min_index) {
    if (size <= 0) {
        return; // tra ve neu mang rong
    }

    *max_value = arr[0];
    *min_value = arr[0];
    *max_index = 0;
    *min_index = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max_value) {
            *max_value = arr[i];
            *max_index = i;
        }
        if (arr[i] < *min_value) {
            *min_value = arr[i];
            *min_index = i;
        }
    }
}

int main() {
    int array[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int max_value, max_index, min_value, min_index;

    find_max_min(array, size, &max_value, &max_index, &min_value, &min_index);

    printf("Phan tu lon nhat: %d tai vi tri %d\n", max_value, max_index);
    printf("Phan tu be nhat: %d tai vi tri %d\n", min_value, min_index);

    return 0;
}
