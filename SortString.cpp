#include <iostream>
#include <string>
using namespace std;

void quickSort(std::string &str, int lb, int ub) {
int low = lb, high = ub;
int pivot = str[(low + high) / 2];
/* partition */

do {
while (str[low] < pivot) low++;

while (str[high] > pivot) high--;

  if (low <= high) {
    std::swap(str[low], str[high]);
    low++; high--;
  }
}while (low <= high);

/* recursion */

  if (lb < high) quickSort(str, lb, high);

  if (low < ub) quickSort(str, low, ub);
}

int main ()
{
    string str;
    int len;
    
    cin >> len;
    cin >> str;

    quickSort(str, 0, len-1)
    return 0;
}