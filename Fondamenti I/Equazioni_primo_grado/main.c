double radici(double a, double b)
    {
        if (a==0)
            return 0;
        else
            if (b==0)
                return 0;
       return -(a/b);
    }


int main(void)
{
    double r=radici(4,3);
    double rr=radici(0,3);
    double rrr=radici(3,0);
    return 0;
}
/* ax+b=0
x=-(a/b)*/
