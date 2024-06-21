package main

import "fmt"

/*
The complexity of our function is O(1) because it takes only one step 
to execute and return us when we need.

=> O(1)
*/
func add(a int, b int) int {
	return a + b
}



func main(){
	fmt.Println(add(1,2));
}