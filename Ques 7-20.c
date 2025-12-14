Write a program to search a number in array.
 #include <stdio.h>
int main() {
    int arr[100], n, key, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Number %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("Number %d not found in the array\n", key);
    }
    return 0;
}
Write a program to prograM TO COPY all elements of one array to another
#include <stdio.h>

int main() {
    int a[100], b[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* Copy elements from array a to array b */
    for(i = 0; i < n; i++) {
        b[i] = a[i];
    }

    printf("Elements of second array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
write a program to find an element that appears most frequently in an array
#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int maxCount = 0, mostFreq;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }

    printf("Most frequent element is %d (appears %d times)\n",
           mostFreq, maxCount);

    return 0;
}
Write a program to find common elements between two arrays
#include <stdio.h>

int main() {
    int a[100], b[100], n1, n2, i, j;
    int found;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    printf("Common elements are:\n");
    for(i = 0; i < n1; i++) {
        found = 0;
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if(found == 1) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
Series summ:
series1 #include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (1.0 / i);
    }

    printf("Sum = %f", sum);
    return 0;
}
series 2 #include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sum = sum - (1.0 / i);
        else
            sum = sum + (1.0 / i);
    }

    printf("Sum = %f", sum);
    return 0;
}
series 3 #include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 1, fact = 1;

    printf("Enter value of x and n: ");
    scanf("%f %d", &x, &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
        sum = sum + (pow(x, i) / fact);
    }

    printf("Sum = %f", sum);
    return 0;
}
ques 15-
 #include <stdio.h>
int main() {
    int a[] = {2, 3, -2, 4};
    int n = 4;
    int maxProduct = a[0];
    int currMax = a[0], currMin = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < 0) {
            int temp = currMax;
            currMax = currMin;
            currMin = temp;
        }
        currMax = (a[i] > currMax * a[i]) ? a[i] : currMax * a[i];
        currMin = (a[i] < currMin * a[i]) ? a[i] : currMin * a[i];
        if(currMax > maxProduct)
            maxProduct = currMax;
    }
    printf("Maximum Product = %d", maxProduct);
    return 0;
}
ques 16:
#include <stdio.h>
int main() {
    int n = 3;
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n/2; j++) {
            int temp = a[i][j];
            a[i][j] = a[i][n-j-1];
            a[i][n-j-1] = temp;
        }
    }
    printf("Rotated Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
ques 17:
#include <stdio.h>
int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int top = 0, bottom = 2, left = 0, right = 2;
    int i;
    printf("Spiral Order: ");
    while(top <= bottom && left <= right) {
        for(i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;
        for(i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;
        for(i = right; i >= left; i--)
            printf("%d ", a[bottom][i]);
        bottom--;
        for(i = bottom; i >= top; i--)
            printf("%d ", a[i][left]);
        left++;
    }
    return 0;
}
ques 18:
#include <stdio.h>

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int top = 0, bottom = 2, left = 0, right = 2;
    int i;
    printf("Spiral Order: ");
    while(top <= bottom && left <= right) {
        for(i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        for(i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        for(i = right; i >= left; i--)
            printf("%d ", a[bottom][i]);
        bottom--;

        for(i = bottom; i >= top; i--)
            printf("%d ", a[i][left]);
        left++;
    }
    return 0;
}
ques 19:
#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ')
            count++;
    }

    if(str[0] != '\0')
        count++;
    printf("Number of words = %d", count);
    return 0;
}
ques 20:
#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 4};
    int n = 4;
    int i, j, product;

    printf("Output: ");
    for(i = 0; i < n; i++) {
        product = 1;
        for(j = 0; j < n; j++) {
            if(i != j)
                product *= a[j];
        }
        printf("%d ", product);
    }
    return 0;
}

  
 
  
