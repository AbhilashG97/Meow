import java.util.Scanner;
import java.util.Stack;

public class PostfixtoInfix {
    private String postfix;
    private Stack<String> s;

    public PostfixtoInfix(String postfix){
        this.postfix = postfix;
        s = new Stack<>();
    }

    public boolean getOperator(char c){
        if(c == '+' || c=='-' || c=='/' || c=='*' || c=='^'){
            return true;
        } else {
            return false;
        }
    }

    public String convert(){
        for(int i=0; i<postfix.length(); i++){
            char c = postfix.charAt(i);
            if(getOperator(c)){
                String b = s.pop();
                String a = s.pop();
                s.push("("+a+c+b+")");
            }else {
                s.push(""+c);
            }
        }
        return s.pop();
    }

    public static void main(String[] args){
        try(Scanner sc = new Scanner(System.in)){
            PostfixtoInfix ps = new PostfixtoInfix(sc.next());
            System.out.println("Infix : "+ps.convert());
        }
    }    
}