//C Program Swap Numbers in Cyclic Order


int main() {
    int a=2;
    int b=4;
    int c=6;
    int temp;

    prints("Enter a, b and c respectively: ");


    prints("Value before swapping:\n");
    printi(a);
    printi(b);
    printi(c);

    temp=b;
    b=a;
    a=c;
    c=temp;

    prints("Value after swapping:\n");
    printi(a);
    printi(b);
    printi(c);

    return 0;
}
