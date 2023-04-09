// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int cnt = 0;
    for (int i = 0; i < len - 1;i++) {
        for (int j = i + 1;j < len;j++) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[j] == value)
                cnt++;
        }
    }
    return cnt;
}

int countPairs2(int *arr, int len, int value) {
    int cnt = 0;
    for (int i = 0;i < len - 1;i++) {
        for (int j = i + 1;j < len;j++) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] + arr[i + 1] > value)
                return cnt;
            if (arr[i] + arr[j] == value)
                cnt++;
        }
    }
    return cnt;
}
int cbinsearch(int* arr, int len, int value, int i) {
    int cnt = 0;
    int l = len;
    int r = i;
    while (r < l - 1) {
        int mid = (r + l) / 2;
        if (arr[i] + arr[mid] == value) {
            cnt++;
            int elem = mid + 1;
            while (arr[i] + arr[elem] == value && elem < l) {
                cnt++;
                elem++;
            }
            elem = mid - 1;
            while (arr[i] + arr[elem] == value && elem > r) {
                cnt++;
                elem--;
            }
            break;
        }
        if (arr[i] + arr[mid] > value) {
            l = mid;
        }
        else {
        } else {
            r = mid;
        }
    }
    return count;
}
int countPairs3(int *arr, int len, int value) {
    int cnt = 0;
    for (int i = 0; i < len - 1; i++) {
        cnt += cbinsearch(arr, len, value, i);
    }
    return cnt;
}
