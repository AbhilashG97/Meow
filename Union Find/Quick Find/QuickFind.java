public class QuickFind {

    private int[] idArray;

    /* Constructor to intialize the array
     * and populate the array with elements 
     * corresponding to the idex position
     **/

    public QuickFind(int size){
        idArray = new int[size];
        for(int i=0; i<size; i++){
            idArray[i] = i;
        }
    }

    /* Return true when two indices are connected
     * and false, when they are not connected
     **/

    public boolean isConnected(int p, int q){
        return idArray[p] == idArray[q]; 
    }

    /* In the union method, we take the value of the element present 
     * at the position given by the second argument and assign 
     * it to the first connected component, hence all the values 
     * of the first connected component get changed to the value
     * present inside the array at q (i.e the second argument)
     **/  

    public void union(int p, int q){
        int pid = idArray[p];
        int qid = idArray[q];

        for(int i=0; i<idArray.length; i++){
            if(idArray[i] == pid){
                idArray[i] = qid;
            }
        }
    }

    /* Quick find is however very slow as, if it were to
     * find N union of N components, then it would take N^2
     * time
     * Also quadratic algorithms do not scale with technology 
     **/

}