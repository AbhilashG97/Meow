import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        while (T-- > 0) {
            int N = scanner.nextInt();
            int C = scanner.nextInt();
            int[] candies = new int[N];

            int sum = 0;
            for (int i=0; i<N; i++) {
                candies[i] = scanner.nextInt();
                sum += candies[i];
            }

            if (sum > C) {
                System.out.println("No");
            } else {
                System.out.println("Yes");
            }
        }
        scanner.close();
    }
}