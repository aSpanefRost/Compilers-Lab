// C program to print Half Pyramid of *

int main() {
   int i, j, rows;
   prints("Enter the number of rows: ");
   rows = 5;
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         prints("* ");
      }
      prints("\n");
   }
   return 0;
}
