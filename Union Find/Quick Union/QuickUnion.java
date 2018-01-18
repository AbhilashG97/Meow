public class QuickUnion {
    
    private int[] idArray;

    /* The constructor is used to initialize and 
     * populate the array.
     **/ 

    public QuickUnion(int size){
        idArray = new int[size];
        for(int i=0; i<size; i++){
            idArray[i] = i;
        }
    }

    /* This method is used to get the root of an element at 
     * a given index. To get a better understanding of the data structure
     * try to visualize the data structure as an array of elements 
     * and not a tree.
     **/  

    public int getRoot(int index){

        while(index != idArray[index]){
            index = idArray[index];
        }
        return index;
    }

    /* This method is used to check wheather the two given elements at a given indecies
     * are connected or not. This is done by checking wheather the elements have
     * the same root or not. If they have the same root, then they are connected else they 
     * are not connected.
     **/ 

    public boolean isConnected(int p, int q){
        return getRoot(p) == getRoot(q);
    }

    /* This method is used to find the union of two given elemets at specified 
     * indices. In this method we make the root of the first element, a subtree 
     * of the root of the second element.
     **/

    public void union(int p, int q){
        int rootOfP = getRoot(p);
        int rootOfQ = getRoot(q);

        idArray[rootOfP] = rootOfQ;
    }

    public int[] getIdArray(){
        return idArray;
    }

}