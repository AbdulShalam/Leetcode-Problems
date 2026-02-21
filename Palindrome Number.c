bool isPalindrome(int x) {
    long int d=0,s=0,n=x;
    if(x<0)
        return false;
    else
    {
        while(n>0)
        {
        d=n%10;
        s=s*10;
        s=s+d;
        n=n/10;
        }
    }
if(x==s)
return true;
else
return false;
    
}
