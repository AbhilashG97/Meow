package mystack;

import java.util.Scanner;

public class MyStack {
    private int[] stack;
    private int top = -1;
    private int size;
    Scanner s;

    public MyStack(int size){
        this.size = size;
        stack = new int[size];
        s = new Scanner(System.in);
    }

    public void push(int num){
        if(top + 1 < size){
            top++;
            stack[top] = num;
        }else{
            System.out.println("Stack is full.");
        }
    }

    public int pop(){
        if(top>=0){
            stack[top] = -1;
        } else {
            System.out.println("Stack is empty.");
        }
        return stack[top--];
    }

    public int peek(){
        return stack[top];
    }

    public void pushAll(){
        int[] arr = new int[size];
        for(int d :arr){
            arr[d]=s.nextInt();
        }
        for(int i=top, j=0; i<size, j<size; i++){
            stack[i] = arr[j];
            j++;
        }
    }

    public static void main(String[] args){
        // Main 
    } 
}
