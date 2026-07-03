#include <stdio.h>
int b,s,g;

int main()
{
    int count=0;
    for(g=1;g<5;g++)
    {
        for(b=1;b<5;b++)
        {
            for(s=1;s<5;s++)
            {
                if(g!=s && g!=b && s!=b)
                {
                    printf("%d\n",(b*100+s*10+g));
                    count++;
                }
                
            }
        }
    }
    printf("%d\n",count);
    return 0;
}

