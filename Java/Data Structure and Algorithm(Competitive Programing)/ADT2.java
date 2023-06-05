public class Array {
    private int capacity;
    private int lastIndex;
    private int[] ptr;
// Creating a constructor in java
    public Array(int capacity) {
        this.capacity = capacity;
        this.lastIndex = -1;
        this.ptr = new int[capacity];
    }
// creating the function which are give capacity of arrays
    public int getCapacity() {
        return capacity;
    }
    // creating a function which are give the lastindex of arrays;
    public int getLastIndex() {
        return lastIndex;
    }

    public int[] getPtr() {
        return ptr;
    }

    public void insert(int value) {
        if (lastIndex + 1 >= capacity) {
            System.out.println("Error: Array is full.");
            return;
        }

        lastIndex++;
        ptr[lastIndex] = value;
    }

    public int get(int index) {
        if (index < 0 || index > lastIndex) {
            System.out.println("Error: Index out of bounds.");
            return -1;
        }

        return ptr[index];
    }

    public void set(int index, int value) {
        if (index < 0 || index > lastIndex) {
            System.out.println("Error: Index out of bounds.");
            return;
        }

        ptr[index] = value;
    }
}