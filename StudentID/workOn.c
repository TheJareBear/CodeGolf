s,t,c,v;
main()
{
	for(;c=getchar(),c>0;)
		c<11?(!(s%7)|!(s%11)|v)?puts("invalid"):puts("valid"):0;
		c<11?s=t=v=0:(t+=9*t+c-48);
		c>10?v=(!(c-48)&&!t)?1:v:0;
}
