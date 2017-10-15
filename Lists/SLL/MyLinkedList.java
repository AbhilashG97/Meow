import java.io.*;

public class MyLinkedList {

	Node head;

	public static class Node{

		Node next;
		String data;

		public Node(String data){
			this.data = data;
			next = null;
		}
	}

	public void push(String data){
		Node insertNode = new Node(data);
		insertNode.next = head;
		head = insertNode;
	}

	public void append(String data){

		Node appendNode = new Node(data);

		if(head == null){
			head = new Node(data);
			return;
		}

		appendNode.next = null;

		Node last = head;
		while(last.next!=null){
			last = last.next;
		}

		last.next = appendNode;
		return;

	}

	public void insertAt(Node prevNode, String data){
		if(prevNode == null){
			System.out.println("PrevNode cannot be empty.");
			return;
		}
		Node insertNode = new Node(data);
		insertNode.next = prevNode.next;
		prevNode.next = insertNode;
	}

	public void printList(){
		Node n = head;
		while(n!= null){
			System.out.print(n.data+" ");
			n = n.next;
		}
		System.out.println();
	}

	public static void main(String[] args){
		MyLinkedList mll= new MyLinkedList();
			mll.append("12");
			mll.append("34");
			mll.push("2");
			mll.push("6");
			mll.insertAt(mll.head.next, "77");
			mll.printList();
	}
}