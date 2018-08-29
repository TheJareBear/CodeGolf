c;j;main(i){char a[9];for(;gets(a);printf("%s:%d\n",c?"no":"yes",j))for(j=i=c=0;a[i];a[i++]^a[strlen(a)-i]?c=1:c)j+=a[i];}
