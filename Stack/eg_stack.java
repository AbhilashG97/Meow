package mystack;

import java.util.Arrays;
import java.util.Scanner;

public class eg_stack {

    private String[] stack;
    private int size;
    private int top = -1;
    private Scanner sc;
    eg_stack(int size){
        this.size = size;
        stack = new String[size];
        Arrays.fill(stack, "-1");
        sc = new Scanner(System.in);
    }

    public void push(){
        if(top + 1 < size){
            top++;
            stack[top] = sc.next();
        } else {
            System.out.println("The stack is full.");
        }
    }

    public void peek (){
        System.out.println(stack[top]);
    }

    public void pushAll(){
        for(int i=0; i<size; i++){
            stack[i]=sc.next();
            top++;
        }
    }

    public void pop(){
        if(top>=0){
            stack[top]="-1";
            System.out.println("This element was popped."+stack[top]);
            top--;
        }else{
            System.out.println("The Stack is empty.");
        }
    }

    public void display(){
        System.out.println("---------------------\n---------------\n-------------");
        for(int i=top; i>=0; i--){
            System.out.println(stack[i]);
        }
        if(top<0){
            System.out.println("The stack is empty.");
        }
    }

    public void popAll (){
        for(int i = top; i>=0; i--){
            stack[i]="-1";
            top--;
        }
    }

    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int num = s.nextInt();
        eg_stack n = new eg_stack(num);
        n.pushAll();
        n.display();
        n.popAll();
        n.display();
    }
}