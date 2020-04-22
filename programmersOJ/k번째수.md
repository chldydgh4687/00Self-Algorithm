# 문제 설명

배열 array의 i번째 숫자부터 j번째 숫자까지 자르고 정렬했을 때, k번째에 있는 수를 구하려 합니다.

예를 들어 array가 [1, 5, 2, 6, 3, 7, 4], i = 2, j = 5, k = 3이라면

    array의 2번째부터 5번째까지 자르면 [5, 2, 6, 3]입니다.
    1에서 나온 배열을 정렬하면 [2, 3, 5, 6]입니다.
    2에서 나온 배열의 3번째 숫자는 5입니다.

배열 array, [i, j, k]를 원소로 가진 2차원 배열 commands가 매개변수로 주어질 때, commands의 모든 원소에 대해 앞서 설명한 연산을 적용했을 때 나온 결과를 배열에 담아 return 하도록 solution 함수를 작성해주세요.

# 제한사항

    array의 길이는 1 이상 100 이하입니다.
    array의 각 원소는 1 이상 100 이하입니다.
    commands의 길이는 1 이상 50 이하입니다.
    commands의 각 원소는 길이가 3입니다.

# 입출력 
예
array  
[1, 5, 2, 6, 3, 7, 4]   	
commands  
[[2, 5, 3], [4, 4, 1], [1, 7, 3]] 
results
[5, 6, 3]

# 입출력 예 설명

[1, 5, 2, 6, 3, 7, 4]를 2번째부터 5번째까지 자른 후 정렬합니다. [2, 3, 5, 6]의 세 번째 숫자는 5입니다.
[1, 5, 2, 6, 3, 7, 4]를 4번째부터 4번째까지 자른 후 정렬합니다. [6]의 첫 번째 숫자는 6입니다.
[1, 5, 2, 6, 3, 7, 4]를 1번째부터 7번째까지 자릅니다. [1, 2, 3, 4, 5, 6, 7]의 세 번째 숫자는 3입니다.

#### visual c++ 환경에서 테스트할 경우, 밑의 반복문의 주석을 해제하시고 아래 반복문을 주석 처리하고 실행하시면됩니다.
#### 프로그래머스에서는 solution 함수만 OJ검사해서 채점해서 그렇습니다.  

# 소스 코드

```c++
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
vector<int> solution(vector<int> array, vector<vector<int>> commands);
int main() {
	vector<int> arr(7, 0);
	vector< vector<int> > com(50);
	for (int i = 0; i < 50; i++) com[i] = vector<int>(3, 0);

	//input
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> com[i][j];
		}
	}
	solution(arr, com);
	return 0;
}
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	int a, b, pos, cut_pos = 0;
//	for (int i = 0; i < 3; i++) {
	for (int i = 0; i < commands.size(); i++) {
		a = commands[i][0] - 1;
		b = commands[i][1];
		pos = commands[i][2];
		
		vector<int> cut(b - a);
		for (int j = a; j < b; j++) 
			cut[cut_pos++] = array[j];
		
		sort(cut.begin(), cut.end());

		answer.push_back(cut[pos-1]);
		cut_pos = 0;
	}
	return answer;
}
```
