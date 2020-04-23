# Problem
There are N planets in the universe, and Google's Space division has installed N vacuum tubes through which you can travel from one planet to another. The tubes are bidirectional; travelers may use a tube between two planets to travel from either of those planets to the other. Each vacuum tube connects two planets and no two vacuum tubes connect the same pair of planets. These tubes connect the planets such that it is possible to travel from any planet to any other planet using one or more of them. Some of these tubes are connected such that there exists exactly one cycle in the universe. Google has hidden gifts in all the planets that are part of this cycle. Now, Google wants to know how far away each of the planets in the universe is from the gifts.

Your task is to find the minimum distance (in terms of the number of vacuum tubes) between each planet and a planet that is part of the cycle. Planets that are part of the cycle are assumed to be at distance 0.

# Input
The first line contains an integer T, the number of test cases. T test cases follow. The first line of each test case contains an integer N, the number of planets and vacuum tubes. The planets are numbered from 1 to N.
N lines follow, the i-th of these lines contains two integers xi and yi, indicating that the i-th vacuum tube connects planet xi and planet yi.

# Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is a list of N space-separated values in which the i-th value represents the minimum distance between the i-th planet and a planet in the cycle.

# Limits
1 ≤ T ≤ 100.
Time limit: 20 seconds per test set.
Memory limit: 1 GB.
1 ≤ xi ≤ N, for all i.
1 ≤ yi ≤ N, for all i.
xi ≠ yi, for all i.
(xi, yi) ≠ (xj, yj), for all i ≠ j.

The graph in which planets are nodes and tubes are edges is connected and has exactly one cycle.
### Small dataset (Test set 1 - Visible)
3 ≤ N ≤ 30.

### Large dataset (Test set 2 - Hidden)
3 ≤ N ≤ 1000.

# Sample

### Input  
2
5
1 2
2 3
3 4
2 4
5 3
3
1 2
3 2
1 3
  
### Output  
 
Case #1: 1 0 0 0 1
Case #2: 0 0 0

In Sample Case #1, the cycle consists of planets 2, 3, and 4. Therefore, the distances for planets 2, 3, and 4 are 0. There is a vacuum tube between 1 and 2, and another vacuum tube between 3 and 5. Thus, planets 1 and 5 are at a distance 1 from the cycle.
In Sample Case #2, all the planets are part of the cycle. Hence, their distances are 0.

### 분석

- 어떠한 수직선에 놓여있는 행성을 끼고있는 범위 돌의 최소개수를 구하는 문제인줄 알았더니, 입체적으로 생각해서 입력되는 진공관에 의해 반드시 circle을 생성하고, 이에 접근하는 나머지 행성으로부터의 최소 거리를 구하는 문제이다.
