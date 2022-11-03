float get_ratio(int a, int b, int x)
{
    float i;
    float nb;

    i = (b - a);
    nb = (x - a);
    nb = nb / i;
    return (nb);
}
