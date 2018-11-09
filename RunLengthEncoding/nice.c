main(n)
{
	char*t=&n+9;
	for(;~scanf("%s%*c",t);puts(""))
		if(*t&1)
			for(gets(t);*t;printf("%%%d$%c",n,*(t-1)))
				for(n=1;*t++==*t;n++);

		else
			for(;scanf("%*c%d%*c%s",&n,t)>0;)
				for(;n--;)
					putchar(*t);

}
