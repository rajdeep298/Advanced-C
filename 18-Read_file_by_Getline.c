#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

void main() {
    FILE *fp = fopen("data.txt", "r");
    assert(fp != NULL);

    char *line = NULL;
    size_t buffer_len = 0;

    //Syntax for getline is ssize_t getline(char **lineptr, size_t *n, FILE *stream);
    while (getline(&line, &buffer_len, fp) != -1) {
        printf("%s", line);
    }
    assert(feof(fp));
    free(line);

    fclose(fp);
}