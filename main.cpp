//�㷨����cppд���԰�qwq
#include <bits/stdc++.h>

using namespace std;

const int N = 100;

int n, m, res[N] = {1};

void dfs(int j) {  // j��ʾ�����˵ڼ�����

    for (int i = res[j - 1]; i <= m; i++) { // ���ֵ������У����Ե�ǰ����ʼֵΪǰһ������֮����������

        if (i == n) continue; //��һλ����Ϊn����
        res[j] = i;
        m -= i;

        if (m == 0) {
            for (int k = 1; k < j; k++)
                cout << res[k] << "+";
            cout << res[j] << endl;
        } //���н���
        else dfs(j + 1); //������һ����

        m += i; //�ָ��ֳ�
    }

}

int main () {
    cin >> n;

    m = n;

    dfs(1);

    return 0;
}