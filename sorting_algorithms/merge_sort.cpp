#include<iostream>
#include<vector>

using namespace std;

vector<int> mergeSortedArrays(vector<int> leftHalf, vector<int> rightHalf) {
  vector<int> sortedArray(leftHalf.size() + rightHalf.size(), 0);
  int i = 0;
  int j = 0;
  int k = 0;  
  while(i < leftHalf.size() && j < rightHalf.size()) {
    if(leftHalf[i] < rightHalf[j]) {
      sortedArray[k] = leftHalf[i];
      i++;
    }
    else {
      sortedArray[k] = rightHalf[j];
      j++;
    }
    k++;
  }
  while(i < leftHalf.size()) {
    sortedArray[k] = leftHalf[i];
    i++;
    k++;
  }
  while(j < rightHalf.size()) {
    sortedArray[k] = rightHalf[j];
    k++;
  }
  return sortedArray;
}



vector<int> mergeSort(vector<int>& array) {
  if(array.size() == 1) return array;
  int middleIdx = array.size() / 2;
  vector<int> leftHalf(array.begin(), array.begin() + middleIdx);
  vector<int> rightHalf(array.begin() + middleIdx, array.end());
  return mergeSortedArrays(mergeSort(leftHalf), mergeSort(rightHalf));
}


int main() {
  vector<int> array {5, 4, 3, 2, 1};
  vector<int> sortedArray = mergeSort(array);
  for(int num : sortedArray) cout << num << " ";
  cout << "\n";
  return 0;
}
