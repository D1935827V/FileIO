#include <stdio.h>

int main() {
   
    int x = 2;
   FILE *fp;
   char buff[255];

   fp = fopen("/Users/1935827/Documents/bruh.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

    while (x < 100){
   fgets(buff, 255, (FILE*)fp);
   printf("%i: %s\n",x, buff);
        x++;
}

   fclose(fp);

}

