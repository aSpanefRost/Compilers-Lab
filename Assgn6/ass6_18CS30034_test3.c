
//C Program to Find G.C.D Using Recursion
int hcf(int n1, int n2);
int main() {
    int n1, n2;
    prints("Enter two positive integers: ");
    n1 = 24;
    n2 = 135;
    printi(hcf(n1, n2));
    return 0;
}
int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
