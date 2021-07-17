#include <unistd.h>

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

void put_char(char c)
{
    write(1, &c, 1);
}

void put_int(int n)
{
    const char *digits = "0123456789";
    char b;
    b = digits[n];
    put_char(b);
}
