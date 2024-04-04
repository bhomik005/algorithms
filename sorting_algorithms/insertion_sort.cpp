#include<iostream>

using namespace std;

void swap(int i, int j, vector<int>& array) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

vector<int> insertionSort(vector<int> array) {
  // O(n^2) time | O(1) space
  for(int i = 1; i < array.size(); ++i) {
    int j = i;
    while(j >= 1 && array[j-1] > array[j]) {
      swap(j-1, j, array);
      j -= 1;
    }
  }
  return array;
}

int main() {
  vector<int> array {5, 4, 3, 2, 1};
  vector<int> sortedArray = insertionSort(array);
  for(int num : sortedArray) cout << num << " ";
  cout << "\n";
  return 0;
}
