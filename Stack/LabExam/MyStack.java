import java.io.*;

public class MyStack<T> {

	private T data, temp;
	private T[] stack;
	private int size;

	@SuppressWarnings("unchecked")
	public MyStack(int size){
		stack = (T[]) new Object[size];
		data = temp = null;
		this.size = -1;
	}

	public void push(T data) throws IOException{
		if(isFull()){
			throw new IOException("Stack is full");
		}

		stack[size] = data;
		size++;
	}

	public boolean isEmpty(){
		if(size == -1){
			return true;
		}else{
			return false;
		}
	}

	public boolean isFull(){
		if(size == stack.length){
			return true;
		}else{
			return false;
		}
	}

	public T pop() throws IOException{
		if(isEmpty()){
			throw new IOException("Stack is empty");
		}
		temp = stack[size];
		stack[size] = null;
		return temp;
	}

	public T peek(){
		return stack[size];
	}

}