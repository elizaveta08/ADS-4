// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int k, i, j = 0;
  for (i = 0; i < len - 1; i++) {
    for (j = i + 1; j < len; j++) {
      if (i != j) {
        if ((arr[i]+arr[j]) == value) {
          k++;
        }
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
      if (i != j) {
        if ((arr[i]+arr[j]) == value) {
          k++;
        }
      }
    }
  }
  return k;
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  int k, i, il, j, vt = 0;
    for (int il = 0; il < len; il++) {
      vt = value - il;
       j = len - 1;
       //while (i < j) {
       if (i < j) {
          int mid = i + (j - i) / 2;
          if (arr[mid] == vt)
              k+=1;
          else if (arr[mid] > vt)
              j = mid;
          else
              i = mid + 1;
       }
      //if ((arr[il]+arr[j]) == value) {
        //k++;
      }
      return k;
  return k;
  return 0;
}
