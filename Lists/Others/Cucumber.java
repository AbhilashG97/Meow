import java.io.*;

public class Cucumber <E> {

	private final static int CAPACITY = 15;
	private E[] data;
	private int size;

	public Cucumber(){
		this(CAPACITY);
		size = 0;
	}

	@SuppressWarnings("unchecked")
	public Cucumber(int capacity){
		size = 0;
		data = (E[]) new Object[capacity];
	}

	public boolean isEmpty(){
		return size==0;
	}

	public E get(int index){
		checkIndex(index, size);
		return data[index];
	}

	public E set(int index, E e){
		checkIndex(index, size);
		E temp = data[index];
		data[index] = e;
		return temp; 
	}

	public void add(int index, E e) throws IllegalStateException{
		checkIndex(index, size);
		if(size == data.length){
			resize(2*data.length);
		}
		for(int k = size-1; k>=index; k--){
			data[k+1] = data[k];
		}
		data[index] = e;
		size++;
	}

	public E remove(int index) throws IllegalStateException{
		if(isEmpty()){
			throw new IllegalStateException("List is already empty");
		}
		E temp = data[index];
		for(int j = index; j<size; j++){
			data[j] = data[j+1];
		}
		size--;
		return temp;
	}

	@SuppressWarnings("unchecked")
	public void resize(int capacity){
		int i = 0;
		E[] temp = (E[]) new Object[capacity];
		for(E iterator : data){
			temp[i] = iterator;
			i++;
		}
		data = temp;
	}

	public void checkIndex(int i, int n) throws IllegalStateException{
		if(i<0 || i >=n){
			throw new IllegalStateException("invalid index");
		}
	}
}