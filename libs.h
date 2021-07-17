#include <unistd.h>

void gen_matrix(int *ptr);
int arg_val();
int check_val(int *ptr);
void put_char(char c);
void put_int(int n);
void print_matrix_row(int *ptr[]);

// Generate matrix from arguments
void gen_matrix(int *ptr)
{
    //todo
}

// Check validity of arguments.
int arg_val()
{
    //todo
}

// Check validity
int check_val(int *ptr)
{
    //todo
}

// Write char to STDOUT_FILENO
void put_char(char c)
{
    write(1, &c, 1);
}

// Write int below 9 to STDOUT_FILENO
void put_int(int n)
{
    if (n > 9)
        return;
    const char *digits = "0123456789";
    char b;
    b = digits[n];
    put_char(b);
}

void print_matrix_row(int *ptr[])
{
    int iterator;

    iterator = 0;
    while (iterator <= 4)
    {
        put_int(*ptr[iterator]);
        ++iterator;
    }
}

void put_rows(int *row0[], int *row1[], int *row2[], int *row3[])
{
    print_matrix_row(*row0[]);
    put_char('\n');
    print_matrix_row(*row1[]);
    put_char('\n');
    print_matrix_row(*row2[]);
    put_char('\n');
    print_matrix_row(*row3[]);
}
