#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    printf("\n\nThis is the start of the program.\n");

    char *filename = "file.txt";
    int fd = creat(filename, S_IRUSR | S_IWUSR); //create a new file

    if (fd == -1)
    {
      printf("Error creating file");
      abort(); //abort the program
    }

    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int)); //allocate memory

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i + 1;
    }

    printf("Values in the array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
        int x = ptr[i];
    }

    char *data = "Array successfully created.\n";
    write(fd, data, 27);

    close(fd);
    free(ptr); //free memory

    printf("This is the end of the program.\n\n");
    exit(EXIT_SUCCESS); //end/terminate the program

    return 0;
}
