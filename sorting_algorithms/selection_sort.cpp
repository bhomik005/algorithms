#include<iostream>
#include<vector>

using namespace std;

void swap(int i, int j, vector<int>& array) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

vector<int> selectionSort(vector<int> array) {
  // O(n^2) time | O(1) space
  for(int i = 0; i < array.size() - 1; ++i) {
    int smallestIdx = i;
    for(int j  = i + 1; j < array.size(); ++j) {
      if(array[j] < array[smallestIdx]) {
        smallestIdx = j;
      }
    }
    swap(smallestIdx, i, array);
  }
  return array;
}


int main() {
  vector<int> array {5, 4, 3, 2, 1};
  vector<int> sortedArray = selectionSort(array);
  for(int num : sortedArray) cout << num << " ";
  cout << "\n";
  return 0;
}
