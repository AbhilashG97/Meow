import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        while (T-- > 0) {
            int N = scanner.nextInt();

            int[] salaries = new int[N];    

            for (int i=0; i<N; i++) {
                salaries[i] = scanner.nextInt();
            }

            int sum = 0;
            int smallestElement = salaries[0];

            for (int salary : salaries) {
                sum += salary;
                if (salary < smallestElement) {
                    smallestElement = salary;
                }
            }

            System.out.println((sum - N * smallestElement));

        }
        scanner.close();
    }
}