class Solution 
{
    public double myPow(double x, int n)
    {
        double m=0;
        double d=1;
        int i;
        if(n>0)
        {      
        for(i=0;i<n;i++)
        {
            d=d*x;
        }
        return d;
        }
        else
        {
        n=0-n;
           for(i=0;i<n;i++)
        {
            d=d*x;
        }
            m=1/d;
            return m;
        }
    }
}
