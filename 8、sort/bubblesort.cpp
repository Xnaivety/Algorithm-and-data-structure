void swap(int &c, int &d) {
    int temp;
    temp = c;
    c = d;
    d = temp;
}

void bubblesort(int a[], int n) {
    bool flag;
    for (int i = 0; i < n - 1; i++) {
        flag = false;
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                flag = true;
            }
        }
        if (!flag) {
            return;
        }
    }
}

int main() {
    return 0;
}