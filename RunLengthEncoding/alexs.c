main(number)
{
    char*input=&number+9;
    for(;~scanf("%s%*c",input);puts(""))
        if(*input&1)
            for(gets(input);*input;printf("%%%d$%c",number,*(input-1)))
                for(number=1;*input++==*input;number++);
        else
            for(;scanf("%*c%d%*c%c",&number, input)>1;)
                for(;number--;putchar(*input));
}
