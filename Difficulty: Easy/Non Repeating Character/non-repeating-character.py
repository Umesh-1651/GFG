class Solution:
    def nonRepeatingChar(self,s):
        #code here
        
        char_counts = {}
    
        # First pass: Populate the character counts
        for char in s:
            char_counts[char] = char_counts.get(char, 0) + 1
    
        # Second pass: Find the first character with a count of 1
        for char in s:
            if char_counts[char] == 1:
                return char
    
        return "-1"  # No non-repeating character found