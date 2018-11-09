main(n,i)
{
	char c,t[9];
	for(;scanf("%c%*c",&c)>0;puts(""))
		if(c&1)
			for(gets(t),i=0;c=t[i];)
				c^t[++i]?printf("%%%d$%c",n,c),n=1:n++;

		else
			for(;scanf("%*c%d%*c%c",&i,&c)>0;)
				for(;i--;)
					putchar(c);

}
