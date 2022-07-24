//算法就用cpp写可以吧qwq
#include <bits/stdc++.h>

using namespace std;

const int N = 100;

int n, m, res[N] = {1};

void dfs(int j) {  // j表示来到了第几个数

    for (int i = res[j - 1]; i <= m; i++) { // 因按字典序排列，所以当前数初始值为前一个数，之后依次增加

        if (i == n) continue; //第一位不能为n本身
        res[j] = i;
        m -= i;

        if (m == 0) {
            for (int k = 1; k < j; k++)
                cout << res[k] << "+";
            cout << res[j] << endl;
        } //排列结束
        else dfs(j + 1); //搜索下一个数

        m += i; //恢复现场
    }

}

int main () {
    cin >> n;

    m = n;

    dfs(1);

    return 0;
}