v,x,t,i;
main(o,n,c)
{
	char s[9];
	for(;gets(s);i=o>43?x-v:o>42?x+v:x*v,t+=i,R(i))
		for(v=i=0;c=s[i++];v+=c>87?n==67|n==76?-10:10:c>85?5:c>75?50:c>72?n>85?-1:1:c>66?100:c^32?o=c,x=v,v=0:0)
			n=s[i];

	R(t);
}

R(z){printf("%d\n",z);}
