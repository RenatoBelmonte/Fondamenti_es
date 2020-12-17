int felice(unsigned int num)
{
    if (num == 0)
        return 0;

    while ( num > 4)
    {
        unsigned int s = 0;
        while (num > 0)
        {
            unsigned int c = num % 10;
            s += c*c;
            num /= 10;
        }

        num = s;

    }

    return num == 1;
}
