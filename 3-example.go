package main

/*
	The loop stops running when we reach on capital letter E,
	to mean  if can be O(N-2) if E is a 2 characters before the end of our string.

	Here also the principle of dropping constants work because E can be located at an point that we do not know, hence O(N-2) == O(N)

	BEST CASE vs WORST CASE
		- Best case -> if E was the first character, time complexity is O(N-N)
		- Worst case -> if E was the last character or doesn't even exist in the given string, time complexity will be O(N)
*/
func sum_of_char_codes_stopby_E(s string) int {
	var sum int = 0

	for i := 0; i < len(s); i++ {
		if int(s[i]) == 69 {
			return sum
		}
		sum = sum + int(s[i])
	}
	return sum
}

func main() {
	sum_of_char_codes_stopby_E("bEd")
}
