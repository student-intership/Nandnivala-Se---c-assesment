#include <stdio.h>

int main() {
    int choice;

    while (1) {
	    //Display Mrnu option
        printf("\nMenu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of the string\n");
        printf("6. Frequency of a character\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count spaces and digits\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
		 {  // Reverse a string
            char str[100], reversed[100];
            int i, len;

            printf("Enter a string: ");
            getchar(); // Clear newline
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0'; // Remove newline

            len = strlen(str);
            for (i = 0; i < len; i++) {
                reversed[i] = str[len - 1 - i];
            }
            reversed[len] = '\0'; // Null-terminate the reversed string

            printf("Reversed String: %s\n", reversed);

        } 
		else if (choice == 2)
		 { 
		    
           	 char a[10];
	         char b[10];
	         int i,j;
			 fflush(stdin); //clear input buffer
	         printf("Enter String : ");
	         gets(a);
	         printf("\nEnter String : ");
	         gets(b);
			 
         	for(i=0;a[i]!='\0';i++);
	          for(j=0;b[j]!='\0';j++)
	           {
           		a[i]=b[j];
		         i++;
	           }
	        a[i]='\0';//null-terminate concatenated string
			printf("Merge string : %s", a);
			} 
			else if (choice == 3)
			{  // Check if palindrome
            char str[100];
            int i, len, isPalindrome = 1;

            printf("Enter a string: ");
            getchar(); // Clear newline
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0'; // Remove newline

            len = strlen(str);
            for (i = 0; i < len / 2; i++) 
			{
                if (str[i] != str[len - i - 1]) 
				{
                    isPalindrome = 0;
                    break;
                }
            }

            if (isPalindrome) 
			{
                printf("The string is a palindrome.\n");
            } 
			else 
			{
                printf("The string is not a palindrome.\n");
            }

        } 
		else if (choice == 4) 
		{  // Copy a string
            char str[50], copy[50];

            printf("Enter a string: ");
            getchar(); // Clear newline
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0'; // Remove newline

            strcpy(copy, str);
            printf("Copied String: %s\n", copy);

        }
		 else if (choice == 5) 
		 {  // Length of the string
            char str[50];

            printf("Enter a string: ");
            getchar(); // Clear newline
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0'; // Remove newline

            printf("Length of the string: %ld\n", strlen(str));

        } 
		else if (choice == 6) 
		{  // Frequency of a character
            char str[100], ch;
            int i, count = 0;

            printf("Enter a string: ");
            getchar(); // Clear newline
            fgets(str, sizeof(str), stdin);

            printf("Enter a character to find its frequency: ");
            scanf(" %c", &ch);

            for (i = 0; str[i] != '\0'; i++)
			 {
                if (str[i] == ch)
				 {
                    count++;
                }
            }
            printf("Frequency of '%c': %d\n", ch, count);

        } 
		else if (choice == 7)
		 {  // Count vowels and consonants
            char str[100];
            int i, vowels = 0, consonants = 0;

            printf("Enter a string: ");
            getchar(); // Clear newline
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0'; // Remove newline

            for (i = 0; str[i] != '\0'; i++)
			 {
                char ch = tolower(str[i]);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vowels++;
                } 
				else if (ch >= 'a' && ch <= 'z')
				{
                    consonants++;
                }
            }
            printf("Number of vowels: %d\n", vowels);
            printf("Number of consonants: %d\n", consonants);

        } 
		else if (choice == 8)
		 {  // Count spaces and digits
            char str[100];
            int i, spaces = 0, digits = 0;

            printf("Enter a string: ");
            getchar(); // Clear newline
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0'; // Remove newline

            for (i = 0; str[i] != '\0'; i++) 
			{
                if (isspace(str[i])) 
				{
                    spaces++;
                }
				 else if (isdigit(str[i])) 
				{
                    digits++;
                }
            }
            printf("Number of spaces: %d\n", spaces);
            printf("Number of digits: %d\n", digits);

        } 
		else if (choice == 9) 
		{  // Exit
            printf("Exiting program. Thank you!\n");
            break;

        } 
		else 
		{
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
