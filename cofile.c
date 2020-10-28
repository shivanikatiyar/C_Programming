#include<stdio.h>   // File handling program writting data.
int main()
{
 FILE *fp ;       //FILE is a datatype and fp pointer type variable so point file.
char c;
fp=fopen("Testhfile.txt","w");   // Tesfile.txt file name and w is a writting mode.fopen() function file opening.
printf("Please Write:");
while((c=getchar())!=EOF)     // getchar() function character taken one by one and EOF-->end of file.
fputc(c,fp);              // fputc() function (given variable char c;) c variable taken data put in f1(file).
fclose(fp);       // fclose() function use end of file.
}
