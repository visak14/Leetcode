class MyCircularQueue {
 int R;
    int F;
    boolean noElPresent ;
    int[] cqueue = null;
    MyCircularQueue(int k) {
        this.cqueue = new int[k];
        this.F = 0;
        this.R = 0;
        this.noElPresent = true;
    }
    
    boolean enQueue(int value) {
        if (this.isFull()){
            return false;
        }
        else {
            this.noElPresent = false;
            cqueue[R] = value;
            R = (R+1) % cqueue.length;
            return true;
        }
    }
    
    boolean deQueue() {
        if (this.isEmpty())
        {
            return false;
        }
        else
            this.F = (this.F + 1) % cqueue.length;
        if (this.R == this.F)
        {
            this.noElPresent = true;
        }
            return true;
    }
    
    int Front() {
        if (this.isEmpty()){
            return -1;
        }
        else{
            return cqueue[F];
        }
    }
    
    int Rear() {
       if (this.isEmpty())
       {
                     return -1;
       }
        else {
            if (this.R == 0){
                return cqueue[cqueue.length-1];
            }
                else {
                    return cqueue[R-1];
                }
            }
        }
    
    boolean isEmpty() {
        return noElPresent;
    }
    
    boolean  isFull() {
        return this.F == this.R && !this.isEmpty();
        
    }
}

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * boolean param_1 = obj.enQueue(value);
 * boolean param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * boolean param_5 = obj.isEmpty();
 * boolean param_6 = obj.isFull();
 */