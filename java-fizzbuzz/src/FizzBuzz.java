public class FizzBuzz {
    public static void main(String[] args) {
        playGame();
    }//s

    public static void playGame() {
        for (int i = 1; i <= 100; i++) {
            fizzBuzz(i);
        }
    }

    public static void fizzBuzz(int number) {
        if (number % 3 == 0) {
            if (number % 5 == 0) {
                System.out.println("FizzBuzz");
            }
            System.out.println("Fizz");
        }
        else {
            if (number % 5 == 0) {
                System.out.println("Buzz");
            }
            System.out.println(String.valueOf(number));
        }
    }
}
