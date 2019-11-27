#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	// �Է� 
	cin >> n;

	// n ��ŭ �迭 ����
	vector<int> v(n);

	// n ��ŭ�� for��
	for (int i = 0; i < n; i++)
	{
		//v[i] �� �ش��ϴ� int ���� �Է�
		cin >> v[i];
	}

	//�������� ����
	sort(v.begin(), v.end());
	//�������� ������ sort(v.end(),v.begin());

	//�������� ���� �� �ϳ��� �����ϸ鼭 ���Ѵ�.
	int ans = v[0];
	for (int i = 1; i < n; i++) {
		v[i] += v[i - 1];
		ans += v[i];
	}

	// cout << "variables << endl ������ �ش��ϴ� ������ ������ش�.
	cout << ans << endl;
	return 0;
}
