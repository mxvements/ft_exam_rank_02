
void    ft_swap(int *a, int *b)
{
    int b_content;
    int a_content;

    b_content = *b;
    a_content = *a;
    *b = a_content;
    *a = b_content;
}

