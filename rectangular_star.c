void solid_rectangle(int n, int m)
{
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= m; j++)
{
printf("*");
}
printf("\n");
}
}
int main()
{
int rows,columns;
clrscr();
printf("\nEnter the number of rows : ");
scanf("%d", &rows);
printf("\nEnter the number of columns : ");
scanf("%d", &columns);
printf("\n");
solid_rectangle(rows, columns);
getch();
return 0;
}


/* 4
   4
    
    
    ****
    ****
    ****
    ****
          */
