import java.util.*;

public interface MyTree<E> extends Iterable<E>{

	Position<E> parent(Position<E> p) throws IllegalArgumentException;
	int numChildren(Position<E> p) throws IllegalArgumentException;
	Iterable<Position<E>> children(Position<E> p) throws IllegalArgumentException;
	boolean isEmpty();
	boolean isInternal(Position<E> p) throws IllegalArgumentException;
	boolean isExternal(Position<E> p) throws IllegalArgumentException;
	boolean isRoot(Position<E> p) throws IllegalArgumentException;
	int size();
	Iterable<Position<E>> positions();
	Iterator<E> iterator();
}