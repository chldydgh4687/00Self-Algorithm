import sys


def greedy(line):
    total_time = 0
    waiting_time = 0
    line.sort()
    for time in line:
        waiting_time += time
        total_time += waiting_time
    return total_time

if __name__ =="__main__" :
    # 한줄 읽기
    n = int(sys.stdin.readline())
    line = list(map(int, sys.stdin.readline().strip().split()))
    print(greedy(line))