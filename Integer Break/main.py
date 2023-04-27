dic={}
dic[1]=0
dic[2]=1
dic[3]=2


class Solution(object):
    def integerBreak(self, n):
        if(n in dic.keys()):
            return dic[n]
        max_=-1;
        for i in range(2,n//2+1):
            v = max(self.integerBreak(i),i)*max(self.integerBreak(n-i),n-i)
            if(v >= max_):
                max_ = v;
        
        dic[n] = max_
        # print(dic)
        return dic[n]