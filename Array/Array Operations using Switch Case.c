#include <stdio.h>
#include <stdlib.h>  

int main() {
    int a[20], n = 0, choice, i, j, element, index, found, temp, sum;

    printf("Enter initial number of elements (max 20): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Search an Element\n");
        printf("4. Sum of all Elements\n");
        printf("5. Sort (Bubble Sort)\n");
        printf("6. Insert Element at Index\n");
        printf("7. Delete Element by Index\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  
                printf("Enter size of array (max 20): ");
                scanf("%d", &n);
                printf("Enter %d elements:\n", n);
                for (i = 0; i < n; i++) {
                    scanf("%d", &a[i]);
                }
                break;

            case 2:  
                printf("Array elements are: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:  
                printf("Enter element to search: ");
                scanf("%d", &element);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (a[i] == element) {
                        printf("Element found at index %d\n", i);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                    printf("Element not found!\n");
                break;

            case 4:  
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += a[i];
                }
                printf("Sum of elements = %d\n", sum);
                break;

            case 5:  
                for (i = 0; i < n - 1; i++) {
                    for (j = 0; j < n - i - 1; j++) {
                        if (a[j] > a[j + 1]) {
                            temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;
                        }
                    }
                }
                printf("Array sorted successfully!\n");
                break;

            case 6:  
                if (n == 20) {
                    printf("Array full! Cannot insert.\n");
                    break;
                }
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter index (0 to %d): ", n);
                scanf("%d", &index);

                if (index < 0 || index > n) {
                    printf("Invalid index!\n");
                } else {
                    for (i = n; i > index; i--) {
                        a[i] = a[i - 1];
                    }
                    a[index] = element;
                    n++;
                    printf("Element inserted!\n");
                }
                break;

            case 7:  
                printf("Enter index to delete (0 to %d): ", n - 1);
                scanf("%d", &index);

                if (index < 0 || index >= n) {
                    printf("Invalid index!\n");
                } else {
                    for (i = index; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    n--;
                    printf("Element deleted!\n");
                }
                break;

            case 8:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }

        if (choice >= 1 && choice <= 7) {
            printf("Updated Array: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
