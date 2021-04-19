//gcd of two numbers 
int gcd(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (a > b) return gcd(a-b, b);
    return gcd(a, b-a);
}

// Bubble sort
int printi(int n);
int prints(char *c);
int readi(int* eP);
void bubble_sort(int *a, int num);
 
int main() {
   int a[10000],err,num,i,j,k;
   char *c = "\nEnter number of entries:";
   char *c1 = "\nEnter numbers to be sorted:";
   char *c2 = "\nSorted numbers:";
   char *ne = "\n";
   char *sp = " ";
   prints(c);
    num = readi(&err);
    if(err == 0){
        for(k=0;k<num;k++){
            a[k] = readi(&err);
        }
    }
    prints(ne);
    for(k=0;k<num;k++){
        printi(a[k]);
        prints(sp);
    }
    prints(ne);
    bubble_sort(a,num);
    prints(c2);
     for(k=0;k<num;k++){
        printi(a[k]);
        prints(sp);
    }
    prints(ne);
    return 0;
}
 
void bubble_sort(int *a,int num) {
    char *ne = "\n";
   char *sp = " ";
   int tt1,tt2,i, j, k, temp;
   for (i = 0; i < num; i++) {
      for (j = 1; j < num ; j++) {
          tt1 = a[j];
          tt2 = a[j-1];
         if (tt1 < tt2) {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
         }
      }
   }
    
   for(k=0;k<num;k++){
        printi(a[k]);
    prints(sp);
    }
   prints(ne);

}
