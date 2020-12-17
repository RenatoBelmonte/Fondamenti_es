double altezza_caduta (double t)
{
    double g = 9.80665;
    double h;
    h=0.5*g*t*t;
    return h;
}

int main(void)
{
    int a;

    a=altezza_caduta(54);
    a=altezza_caduta(5);
    a=altezza_caduta(0.1);
    a=altezza_caduta(2.03);

    return 0;
}

