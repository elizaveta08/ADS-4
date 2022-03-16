// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int k, i, j = 0;
  for (i = 0; i < len - 1; i++) {
    for (j = i + 1; j < len; j++) {
      if (arr[i]+arr[j]) == value {
        k++;
      }
    }
  }
  return k;
  return 0;
}
int countPairs2(int *arr, int len, int value) {
  int k, i, j = 0;
  for (i = 0; i < len - 1; i++) {
    for (j = len - 1; j >= i; j--) {
      if (arr[i]+arr[j]) == value {
        k++;
      }
    }
  }
  return k;
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  int i = 0, k = 0; j = len - 1;
  while (i < j) {
    int mid = i + (j - i) / 2;
        if (arr[mid] == value)
            j = value - 1;
        else if (arr[mid] > value)
            j = mid;
        else
            i = mid + 1;
  }
  for (i = 0; i < j; i++) {
    for (j; j >= i; j--) {
      if (arr[i]+arr[j]) == value {
        k++;
      }
    }
  }
  return k;
  return 0;
}
