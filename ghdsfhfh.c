int checkab(int *t[],int a, int b)
{
    int k=0;
    while(t[k])
    {
        if((t[k][1]==a && t[k][1]==b) || (t[k][1]==b && t[k][1]==a))
            return 0;
        k++;
    }
    return 1;
}