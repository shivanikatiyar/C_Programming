#include<stdio.h>   // File handling program  Append mode (a) new data enter and old data keep.
int main()
{
 FILE *fp ;       //FILE is a datatype and fp pointer type variable so point file.
char c;
fp=fopen("Testhfile.txt","a");   // Tesfile.txt file name and w is a append mode.fopen() function file opening.
printf("Please Write:");
while((c=getchar())!=EOF)     // getchar() function character taken one by one and EOF-->end of file.
fputc(c,fp);              // fputc() function (given variable char c;) c variable taken data put in f1(file).
fclose(fp);       // fclose() function use end of file.
}
