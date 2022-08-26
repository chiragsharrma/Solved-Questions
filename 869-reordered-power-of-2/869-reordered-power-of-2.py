class Solution:
    def reorderedPowerOf2(self, n: int) -> bool:
        for i in range(32):
            if Counter(str(n))==Counter(str(2**i)):#str method returns string version of int
                return True
        return False