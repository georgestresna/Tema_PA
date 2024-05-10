#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE* fin=fopen("./date/t2/d.in", "r");
    FILE* fout=fopen("r.out", "w");

    char buffer[100];
    while(fgets(buffer, sizeof(buffer), fin))
        fprintf(fout, "%s", buffer);
    //printf("test");

    fclose(fin);
    fclose(fout);

    return 0;
}
