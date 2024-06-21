package main

import "fmt"


/*
This function runs len(s) times, to mean it takes it len(s)  time complexity 
to execute

=> O(n)

*/
func print_string(s string) {
	for i:= 0 ; i < len(s) ; i++ {
		fmt.Printf("%c", s[i])
	}
}

// Totally  O(2N) which turns out to be equal to O(N) because we ignore constants.
func sum_of_char_codes(s string) int {
	var sum int  = 0;

	// O(N)
	for i:= 0 ; i < len(s); i++ {
		sum = sum + int(s[i])
	}

	// O(N)
	for i:= 0 ; i < len(s); i++ {
		sum = sum + int(s[i])
	}

	return sum;
}

func main(){
	print_string("Hey");
}