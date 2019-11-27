#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	// 입력 
	cin >> n;

	// n 만큼 배열 생성
	vector<int> v(n);

	// n 만큼의 for문
	for (int i = 0; i < n; i++)
	{
		//v[i] 에 해당하는 int 정수 입력
		cin >> v[i];
	}

	//오름차순 정렬
	sort(v.begin(), v.end());
	//내림차순 정렬은 sort(v.end(),v.begin());

	//오름차순 정렬 후 하나씩 누적하면서 더한다.
	int ans = v[0];
	for (int i = 1; i < n; i++) {
		v[i] += v[i - 1];
		ans += v[i];
	}

	// cout << "variables << endl 변수에 해당하는 내용을 출력해준다.
	cout << ans << endl;
	return 0;
}
