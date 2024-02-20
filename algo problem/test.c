
#include<string.h>
#include<stdio.h>
int main()
{
    char s[100000];
    int n,count=0,i,T,o=0,c=0;
    scanf("%d",&T);
    while(T--)
    {
        c = 0, o = 0, count=0;
        scanf("%s",&s);
        n = strlen(s);
        for(i=0; i<n-1; i++)
        {
            if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0'))
                count++;
            if(s[i]=='0')
                o++;
            if(s[i]=='1')
                c++;

        }
        if(s[n-1]=='0')
            o++;
        else
            c++;

        if((count>2)||((s[0]=='1')&&(s[n-1]=='1')&&(o!=0))||(o==n))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}