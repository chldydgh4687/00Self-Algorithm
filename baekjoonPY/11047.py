import sys

def coin(line,n,k):
    cnt = 0
    sum = 0
    line.reverse()
    for i in range (n):
        if k / line[i] != 0 :
            cnt = k / line[i]
            sum = sum + int(cnt)
            k = k % line[i]
        if k == 0 :
            break
    return sum

if __name__ =="__main__" :
    n, k = map(int, sys.stdin.readline().strip().split())
    line = list()
    for i in range (n):
        invalue = int(sys.stdin.readline())
        line.append(invalue)
    print(coin(line,n-1,k))

"""
10 4790
1
5
10
50
100
500
1000
5000
10000
50000
"""