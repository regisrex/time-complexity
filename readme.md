## Notes
Big O notation is the measure of your function's growth with respect to input.

1. The simplest trick  to determine the number of times the function  is going to run, is by checking **loops**. The  time complexity of a loop is the number of times the run is going to execute. Check [./2-example.go](./2-example.go)


2. **Drop constants** because we're not calcualating the exact amount of time that it takes our function to execute but we're trying to have an image of how hard or how long the function will run. This is  to mean that O(N) == O(2N)  drop the 2nd constant.    
Even if O(100N) == O(N)  which is greater than O(N^2), it doesn't  mean that practically it is always like this.


3. **Worst case** is always the best way to measure how fast our algorithm is, check [./3-example.go](./3-example.go)



4. **Common time complexities**
    - _O(1) Constant time, the length of the input doesn't matter.
     - O(N) the amount of time taken is equal to the length of the function
    - O(N^2) as the input gets bigger, the amount of time taken gets exponentially bigger.
    - O(logN) 