def length_of_longest_substring(s: str) -> int:
    char_index = {}
    max_length = 0
    start = 0

    for end in range(len(s)):
        if s[end] in char_index and char_index[s[end]] >= start:
            start = char_index[s[end]] + 1

        char_index[s[end]] = end
        max_length = max(max_length, end - start + 1)

    return max_length

# Example usage
s = "abcabcbb"
print("Length of the longest substring:", length_of_longest_substring(s))
