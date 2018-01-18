import java.util.Scanner;

public class Test {
    public static void main(String[] args){
        QuickUnion quickUnion = new QuickUnion(10);
        Scanner scanner = new Scanner(System.in);
        for(int i=0; i<8; i++){
            quickUnion.union(scanner.nextInt(), scanner.nextInt());
        }
        System.out.println(quickUnion.isConnected(8,9));
        for(int i : quickUnion.getIdArray()){
            System.out.println(i);
        }
        scanner.close();
    }
}