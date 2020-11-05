void InsertSort(int a[], int length) {//普通插入排序(哨兵)
    int i, j;
    for (i = 2; i <= length; i++) {//依此将2d到n的元素插入到前面已经排序的序列
        if (a[i] < a[i - 1]) {//如果当前要插入的元素比其前驱元素大，那么将当前元素进行插入
            a[0] = a[i];//将当前元素复制为哨兵
            for (j = i - 1; a[0] < a[j]; j--) {//从后往前查找待插入元素
                a[j] = a[j - 1];
            }
            a[j + 1] = a[0];//复制到插入位置
        }
    }
}

void Insertsort(int a[], int length) {//折半插入排序
    int i, j, low, mid, high;
    for (i = 2; i <= length; i++) {
        if (a[i] < a[i - 1]) {
            a[0] = a[i];//复制给哨兵
        }
        low = 1;
        high = i - 1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (a[mid] > a[0]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        for (j = i - 1; j >= low; j--) {
            a[j + 1] = a[j];
        }
        a[high] = a[0];
    }
}

int main() {
    return 0;
}