import java.util.Scanner;
import java.util.Arrays;
import java.util.ArrayList;

class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        int[] rainbowArray = {1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1};

        while (T-- > 0) {
            int N = scanner.nextInt();
            int[] array = new int[N];

            boolean isRainbowArray = true;

            for (int i=0; i<N; i++) {
                array[i] = scanner.nextInt();
            }

            int head = 0;
            int tail = N-1;

            while (head <= tail) {
                if (array[head] != array[tail] || new ArrayList(Arrays.asList(array)).toString().matches("[1-7]")) {
                    isRainbowArray = false;
                }
                head++;
                tail--;
            }   

            System.out.println(isRainbowArray ? "yes" : "no");
        }
        scanner.close();
    }
}