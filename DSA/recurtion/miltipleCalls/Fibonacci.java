package miltipleCalls;

public class Fibonacci {
    static void main() {
        IO.println(fibonacci(4));
    }

    static int fibonacci(int n){
        if(n <= 1) return n;
        
        return fibonacci(n - 1) + n;
    }
}
