void main() {
    printName("Amit", 5);
    IO.println("====================");
    printNumber1(1, 10);
    IO.println("====================");
    printNumber2(10);
    IO.println("====================");
    printNumber3(10, 1);
}

static void printName(String name, int n) {

    if (n == 0) return;
    IO.println(name);
    printName(name, n - 1);

}

static void printNumber1(int from, int to) {
    if (from > to) return;
    IO.println(from);
    printNumber1(from + 1, to);
}

static void printNumber2(int n) {
    if (n == 0) return;
    IO.println(n);
    printNumber2(n - 1);
}

static void printNumber3(int from, int to) {
    if (from < to) return;
    printNumber3(from - 1, to);
    IO.println(from);
}

