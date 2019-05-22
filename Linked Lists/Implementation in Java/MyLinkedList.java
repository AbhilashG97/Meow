class Node<T> {
    
    public T data;
    public Node<T> next;

    public Node(T data) {
        this.data = data;
        next = null;
    }
}

public class MyLinkedList<T> {
    
    private T data;
    private Node<T> head;

    public MyLinkedList(T data) {
        head = new Node(data);
    }
}

// 1560741
// L3sDPb
// knxWq2