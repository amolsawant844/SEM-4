
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
int main()
{

    int sz;

    char *c = (char *)calloc(100, sizeof(char));
    //OPENING
    int fd = open("amol.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd <0)
    {
        printf("File CREATION UNSUCCESSFUL");
    }
    else
    {
        printf("File CREATED SUCCESSFULLY :) \n ");
    }
    sz = write(fd, "Hello FRIENDS", strlen("Hello FRIENDS"));
    close(fd);

    fd = open("amol.txt", O_RDONLY);
    sz = read(fd, c, 13);
    c[sz] = '\0';
    printf("Those bytes are as follows: % s\n", c);

    return 0;
}
