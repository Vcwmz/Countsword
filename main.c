#include <stdio.h>

int main()
{

    FILE * fp;
    char *path="D:/wang.txt";
    char ch;
    int i,number=0;
    fp = fopen(path, "r");
    ch=fgetc(fp);
    while(ch!=EOF)//EOF end-of-file,This is a condition in computer system when no more character can be read from data source.
    {
        printf("%c",ch);
        if(ch==' ')
            number++;
        ch=fgetc(fp);
    }
    fclose(fp);
    printf("\n\nThis file have %d character.",number+1);

    return 0;
}
