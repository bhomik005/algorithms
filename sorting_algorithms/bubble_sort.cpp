#include<iostream>
#include<vector>

using namespace std;


void swap(int i, int j, vector<int>& array) {
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

vector<int> bubbleSort(vector<int> array) {
  // O(n^2) time | O(1) space
  int counter = 0;
  bool isSorted = false;
  for(int i = 0; i < array.size(); ++i) {
    isSorted = true;
    for(int j = 0; j < array.size() - 1 - counter; ++j) {
      if(array[j] > array[j+1]) {
        swap(j, j + 1, array);
        isSorted = false;
      }
    }
    if(isSorted == true) break;
    counter += 1;
  }
  return array;
}


int main() {
  vector<int> array {5,4,3,2,1};
  vector<int> sortedArray = bubbleSort(array);
  for(int num : sortedArray) cout << num << " ";
  cout << "\n";  
  return 0;
}
