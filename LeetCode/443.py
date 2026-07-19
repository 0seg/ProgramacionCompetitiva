class Solution:
    def compress(self, chars: List[str]) -> int:
        l, r = 0, 1
        wr = 0
        while r <= len(chars):
            while r < len(chars) and chars[r] == chars[l]:
                    r += 1
            if r - l == 1:
                chars[wr] = chars[l]
                wr += 1
            else:
                chars[wr] = chars[l]
                wr+=1
                for e in str(r - l):
                    chars[wr] = e
                    wr+= 1
            l = r
            r = l + 1 
        return wr