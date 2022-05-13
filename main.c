double nfabs (double x){
    if (x > 0)
        return x;
    else
        return (-1)*x;
}

double cosine (double x)
{
    int i;
    double s = 1, n = 0, a = 1;
    
    for (i = 1; i <= 10; i++)
    {
        a = -(a*x*x)/((2*n+2)*(2*n+1));
        s = s + a;
        n++;
    }
    return s;
}


double test_cosine(){
    int r = 0;
    r = r || (nfabs(cosine(0.1) - 0.99) >= 0.1);
    r = r || (nfabs(cosine(0.2) - 0.980) >= 0.001);
    r = r || (nfabs(cosine(0.3) - 0.95533) >= 0.00001);
    r = r || (nfabs(cosine(0.4) - 0.921061) >= 0.0000001);
    return r;
}
int main()
{
    return test_cosine();
}
