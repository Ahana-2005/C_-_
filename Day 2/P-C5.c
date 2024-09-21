//Write a C program which will copy, concatenate, compare 2 strings and print without using 'string.h' header file.
#include <stdio.h>


void my_strcpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}
void my_strcat(char dest[], const char src[]) {
    int dest_len = 0;
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0'; 
}


int my_strcmp(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0; 
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);
    
     int result = my_strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is smaller than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    my_strcpy(str1, str2);
    printf("Copied string: %s\n", str1);

   
    my_strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);


    return 0;
}
