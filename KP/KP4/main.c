#include <stdio.h>
#include <string.h>
#include "table.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Using: ./main file\n");
        exit(1);
    }

    FILE *f = fopen(argv[1], "r");
    Table t;

    table_create(&t);
    table_read(&t, f);
    table_print(&t);
    table_heap_sort(&t);
    table_print(&t);
    table_destroy(&t);
    return (0);
}
