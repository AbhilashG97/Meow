import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();

        while(T-- > 0) {
            int N = scanner.nextInt();
            int K = scanner.nextInt();

            int[] minions = new int[N];

            for (int i=0; i<N; i++) {
                minions[i] = scanner.nextInt();
            }

            int wolverineMinions = 0;
            
            for (int minion : minions) {
                if ((minion + K) % 7 == 0) {
                    wolverineMinions++;
                } 
            }

            System.out.println(wolverineMinions);
        }

        scanner.close();
    }
}