import java.util.Scanner;
import java.util.ArrayList;

public class Solution {

    public static void getResult(ArrayList<Integer> listOne, ArrayList<Integer> listTwo) {
        
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> listOne = new ArrayList<>(), listTwo = new ArrayList<>();
        int listOneSize = scanner.nextInt();
        for(int i=0; i<listOneSize; i++) {
            listOne.add(scanner.nextInt());
        }

        int listTwoSize = scanner.nextInt();
        for(int i=0; i<listTwoSize; i++) {
            listTwo.add(scanner.nextInt());
        }
        scanner.close();        
    }
}