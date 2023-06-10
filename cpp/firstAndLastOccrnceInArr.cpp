#include <bits/stdc++.h>

using namespace std;


int solveForFirstOcc(int n, int key, vector<int> &v)
{
    int start = 0;
    int end = n - 1;
    int res = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == key)
        {
            res = mid;
            end = mid - 1;
        }
        else if (key < v[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}


// Last Occurence in an Array

int solveForLastOcc(int n, int key, vector < int > & v) {
  int start = 0;
  int end = n - 1;
  int res = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (v[mid] == key) {
      res = mid;
      start = mid + 1;

    } else if (key < v[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return res;
}

int main()
{
    int n;
    cout << "enter size of vector (n) :";
    cin >> n;                               // taking size of vector from user
    int a;
    int key;
    cout << "enter key";
    cin >> key;

    vector<int> v;
                                            // we can also mention size here like
                                            // vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    // returning the first occurrence index if the element is present otherwise -1
    cout << "the first occurrence index if the element is present is (otherwise -1) : " << solveForFirstOcc(n, key, v) << "\n\n";
    cout << "the last occurrence index if the element is present is (otherwise -1) : " << solveForLastOcc(n, key, v) << "\n\n";
    return 0;
}