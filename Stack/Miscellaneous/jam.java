import mystack.MyStack;
import java.util.Scanner;

class jam{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        MyStack a = new MyStack(x);
        a.pushAll();
        System.out.println(a.peek());    
    }
}