package parametrizedandfunctional;

public class Parametrized {
    static void main() {
        IO.println(addParametrized(3));
        IO.println(factorial(5));
    }
    static int addParametrized(int n) {
        if (n < 1) return 0;
        return n + addParametrized(n - 1);
    }

    static int factorial(int n){
        if (n == 1) return 1;
        return n * factorial(n - 1);
    }
}
