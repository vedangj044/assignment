public class c{
public static void main (String[] args) {
int[] dataSeq = {6,4,8,2,1};
printIntArray(dataSeq);
for (int index = 1; index < dataSeq.length; ++index)
if (dataSeq[index-1] > dataSeq[index])
swap(dataSeq, index-1, index);
printIntArray(dataSeq);
}
public static void swap(int[] intArray, int i, int j) {
int tmp = intArray[i]; intArray[i] = intArray[j]; intArray[j] = tmp;
}
public static void swap(int v1, int v2) {
int tmp = v1; v1 = v2; v2 = tmp;
}
public static void printIntArray(int[] array) {
for (int value : array)
System.out.print(" " + value);
System.out.println();
}
}
