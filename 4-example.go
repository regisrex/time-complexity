// BINARY SEARCH
package main

import "fmt"

// bubble sort;
// O(n^2);
func sort(nunbers []int) []int {
	sorted := nunbers;
	for i:=0 ; i < len(sorted) ; i++{ 
		for j := 0; j < i; j++ {
			if(sorted[i] < sorted[j]){
				temp := sorted[i];
				sorted[i] = sorted[j]
				sorted[j] = temp;
			}
		}
	}

	return sorted;

}
func binary_search(numbers []int) int {
	sorted := sort(numbers);
	fmt.Println(sorted);
	return 1;
}

func main(){
	binary_search([]int{3,1,10,4,0,6,7});
}