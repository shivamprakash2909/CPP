// #include <stdio.h>
// int main()
// {
//     int m, n, p, q, i, j, k;
//     int a[10][10], b[10][10], res[10][10];

//     printf("Enter the order of first matrix\n");
//     scanf("%d%d", &m, &n);
//     printf("Enter the order of second matrix\n");
//     scanf("%d%d", &p, &q);

//     if (n != p)
//     {
//         printf("Matrix is incompatible for multiplication\n");
//     }
//     else
//     {
//         printf("Enter the elements of Matrix-A:\n");
//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < n; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
//         }

//         printf("Enter the elements of Matrix-B:\n");
//         for (i = 0; i < p; i++)
//         {
//             for (j = 0; j < q; j++)
//             {
//                 scanf("%d", &b[i][j]);
//             }
//         }

//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < q; j++)
//             {
//                 res[i][j] = 0;
//                 for (k = 0; k < p; k++)
//                 {
//                     res[i][j] += a[i][k] * b[k][j];
//                 }
//             }
//         }

//         printf("The product of the two matrices is:-\n");

//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < q; j++)
//             {
//                 printf("%d ", res[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// // defining main with arguments
// int main(int argc, char *argv[])
// {
//     printf("You have entered %d arguments:\n", argc);
//     printf("Printed arguments\n");
//     for (int i = 0; i < argc; i++)
//     {
//         printf("argv[%d]=%s\n", i, argv[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int factorial(int n);
//     int a;
//     printf("Enter a num\n");
//     scanf("%d", &a);
//     printf("Factorial of %d is :%d", a, factorial(a));
//     return 0;
// }

// int factorial(int x)
// {
//     if (x >= 1)
//     {
//         return x * factorial(x - 1);
//     }
//     else
//         return 1;
// }

// #include <stdio.h>
// int main()
// {
//     int a[10], n;
//     printf("Enter size of arr\n");
//     scanf("%d", &n);
//     printf("Enter arr\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Entered array is:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     int pos, x;
//     printf("\nEnter value of x to insert in array\n");
//     scanf("%d", &x);

//     printf("Enter position to be inserted in array\n");
//     scanf("%d", &pos);
//     n++;

//     for (int i = n; i >= pos; i--)
//     {
//         a[i] = a[i - 1];
//     }
//     a[pos - 1] = x;

//     printf("New array is:\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a[10][10], r, c;
//     printf("Enter row & col of matrix\n");
//     scanf("%d %d", &r, &c);
//     printf("Enter arr\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Transpose of martix is\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d ", a[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// void main()
// {
//     char a[10], b[10];
//     printf("Enter your name\n");
//     scanf("%s", &a);
//     printf("Your name is : %s", a);
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         b[10] = a[10] - 'A' + 'a';
//     }
//     printf("%s", b);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int mycontent_count = 0;
//     FILE *fptr;
//     fptr = fopen("abcd.txt", "r");
//     char mycontent[1000];

//     if (fptr != NULL)
//     {
//         printf("File is created Successfully\n");
//         // while (fgets(mycontent, 1000, fptr))
//         // {

//         //     printf("%s", mycontent);
//         // }
//         // print first five wprds
//         while (fscanf(fptr, "%s", mycontent) != EOF && mycontent_count < 5)
//         {
//             printf("%s", mycontent);
//             mycontent_count++;
//         }
//     }
//     else
//     {
//         printf("File open Unsuccessful\n");
//     }
//     // fputs("Hello there I am Shivam\n", fptr);
//     // fputs("My name is Shivam Prakash\n", fptr);
//     fclose(fptr);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int *p;
//     *p = 5;
//     printf("%d", p);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     FILE *file;
//     char filename[100];
//     char word[100];
//     int word_count = 0;

//     printf("Enter the filename: ");
//     scanf("%s", filename);

//     // Open the file for reading
//     file = fopen(filename, "r");

//     if (file == NULL)
//     {
//         printf("Error opening the file.\n");
//         return 1;
//     }

//     printf("First 5 words in the file:\n");

//     // Read and print the first 5 words
//     while (fscanf(file, "%s", word) != EOF && word_count < 5)
//     {
//         printf("%s\n", word);
//         word_count++;
//     }

//     // Close the file
//     fclose(file);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     FILE *file;
//     char filename[100];
//     char ch;
//     int count = 0;

//     // Ask the user for the filename
//     printf("Enter the filename: ");
//     scanf("%s", filename);

//     // Open the file for reading
//     file = fopen(filename, "r");

//     // Check if the file exists
//     if (file == NULL)
//     {
//         printf("File not found or cannot be opened.\n");
//         return 1;
//     }

//     // Skip the first 7 characters
//     while (count < 7 && (ch = fgetc(file)) != EOF)
//     {
//         count++;
//     }

//     // Read and print words after 7 characters
//     printf("Words after 7 characters:\n");
//     while ((ch = fgetc(file)) != EOF)
//     {
//         if (ch == ' ' || ch == '\n' || ch == '\t')
//         {
//             // Word delimiter, print a newline
//             printf("\n");
//         }
//         else
//         {
//             // Print the character
//             printf("%c", ch);
//         }
//     }

//     // Close the file
//     fclose(file);

//     return 0;
// }
