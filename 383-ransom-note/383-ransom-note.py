class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        for c in ransomNote:
            if c not in magazine:
                return False
            magazine = magazine.replace(c,'',1)  #as each letter in magazine can only be used once in ransom so as soon as we find it we take its count and replace it with ''.
        return True    
         
        
        